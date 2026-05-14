# The word "polymorphism" means "many forms", 
# and in programming it refers to methods/functions/operators with the same name that can be executed on many objects or classes.

class Vehicle:
    def __init__(self,brand,model):
        self.brand=brand
        self.model=model

    def move(self):
        print("Vehivle is moving ")

        

class Car(Vehicle):
    pass

class Boat(Vehicle):
  
    def move(self):
        print("sail")

class Airplane(Vehicle):
   
    def move(self):
        print("fly")
        
        
car1=Car("ford","Musatg")
boat1=Boat("Honda","sailing")
flight=Airplane("Boeing","540")

for m in (car1,boat1,flight):
    m.move()