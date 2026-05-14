class Book:
   def __init__(self,title,author,publisher,year):
        self.title = title
        self.author = author
        self.publisher = publisher
        self.year = year

   def display_info(self):
        print(f"Title: {self.title}")
        print(f"Author: {self.author}")
        print(f"Publisher: {self.publisher}")
        print(f"Year: {self.year}")
    
book1=Book("The Great Gatsby","F. Scott Fitzgerald","Scribner",1925)
book1.display_info()

