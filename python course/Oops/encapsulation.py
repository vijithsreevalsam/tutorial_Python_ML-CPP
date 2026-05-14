# Encapsulation is about protecting data inside a class.

# It means keeping data (properties) and methods together in a class, while controlling how the data can be accessed from outside the class.

# This prevents accidental changes to your data and hides the internal details of how your class works.

class Rectagle:
    def __init__(self,height,width):
        self.height=height
        self.width=width
        self.__area=0
    def __cacluate_area(self):
        self.__area=self.height*self.width
    def return_area(self):
        self.__cacluate_area()
        return self.__area

rec=Rectagle(45,56)
print (rec.return_area())
        
