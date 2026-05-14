from fastapi import FastAPI, UploadFile, File, HTTPException
from fastapi.middleware.cors import CORSMiddleware
from pydantic import BaseModel
from typing import List, Optional
import uvicorn
import os
from dotenv import load_dotenv
from vision_service import VisionService

# Load environment variables
load_dotenv() 

app = FastAPI(title="Smart Food Court Billing API")

# CORS setup (allow frontend)
app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],  # In production, specify local frontend URL
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)

# Models
class MenuItem(BaseModel):
    name: str
    price: float
    category: str  # "Main", "Side", "Drink", "Dessert"

class DailySpecial(BaseModel):
    name: str
    price: float
    description: str

class TrayItem(BaseModel):
    name: str
    confidence: float
    price: float

class BillingResponse(BaseModel):
    items: List[TrayItem]
    total_price: float
    is_combo_applied: bool
    combo_details: Optional[str] = None

# Mock Database (In-memory for prototype)
MENU_DB = [
    {"name": "Rice", "price": 50.0, "category": "Main"},
    {"name": "Dal", "price": 30.0, "category": "Main"},
    {"name": "Chicken Curry", "price": 120.0, "category": "Main"},
    {"name": "Salad", "price": 20.0, "category": "Side"},
    {"name": "Yogurt", "price": 15.0, "category": "Side"},
    {"name": "Raita", "price": 20.0, "category": "Side"},
    {"name": "Water", "price": 10.0, "category": "Drink"},
    {"name": "Biryani", "price": 150.0, "category": "Main"},
    {"name": "Soup", "price": 40.0, "category": "Side"},
]

DAILY_SPECIALS = []

@app.get("/")
def read_root():
    return {"message": "Smart Food Court Vision Engine is Running"}

@app.get("/menu")
def get_menu():
    return {"menu": MENU_DB, "specials": DAILY_SPECIALS}

@app.post("/add_special")
def add_special(special: DailySpecial):
    DAILY_SPECIALS.append(special.dict())
    return {"message": "Daily special added", "special": special}

@app.post("/analyze_tray", response_model=BillingResponse)
async def analyze_tray(file: UploadFile = File(...)):
    # Read image file
    contents = await file.read()
    
    # Initialize Vision Service
    vision = VisionService()
    
    # Call Gemini AI with current menu and specials
    detected_items_raw = vision.analyze_tray(contents, MENU_DB, DAILY_SPECIALS)
    
    # Process results to match Backend models
    billable_items = []
    total = 0.0
    
    for item in detected_items_raw:
        # Find price from Menu or Specials
        # (In a real app, use a optimized lookup dict)
        price = 0.0
        
        # Check standard menu
        found = next((m for m in MENU_DB if m["name"] == item["name"]), None)
        
        # Check specials if not found
        if not found:
            found = next((s for s in DAILY_SPECIALS if s["name"] == item["name"]), None)
            
        if found:
            price = found["price"]
            
        billable_items.append(
            TrayItem(name=item["name"], confidence=item.get("confidence", 0.0), price=price)
        )
        total += price

    # Simulating simple combo logic (placeholder)
    is_combo = False
    combo_text = None
    
    # Example Combo Logic: Rice + Dal + Water = discount
    item_names = [i.name for i in billable_items]
    if "Rice" in item_names and "Dal" in item_names:
         is_combo = True
         combo_text = "Rice & Dal Meal Bundle"
         # Simple logic: assume 10% discount on total for now
         total = total * 0.9

    return {
        "items": billable_items,
        "total_price": round(total, 2),
        "is_combo_applied": is_combo,
        "combo_details": combo_text
    }

if __name__ == "__main__":
    uvicorn.run("main:app", host="0.0.0.0", port=8000, reload=True)
