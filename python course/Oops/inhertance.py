
#parent class
class Person:
    def __init__(self,firstname,lastname):
        self.firstname=firstname
        self.lastname=lastname

    def printnmae(self):
        print(self.firstname ,self.lastname)
        

x=Person("John","doee")
x.printnmae()


#child class - or inherited class
class Studnet(Person):
    pass



stundent=Studnet("Sanjay","arun")
stundent.printnmae()

#giving properties to child class

class Employee(Person):
    def __init__(self,fname,lname,year):
        super().__init__(fname,lname) #super method will take all paretn class propertis. of its init method
        self.year=year
emp1=Employee("vijith","viswan",2020)
print (f"{emp1.firstname} {emp1.lastname} was joined this compmay since {emp1.year}")



# Challenge: Inheritance
# Test your understanding of Python inheritance by completing a small coding challenge.

# Instructions
# Inside the editor, complete the following steps:
# Create a parent class Animal with an __init__ that takes name
# Add a method speak that prints the name
# Create a child class Dog that inherits from Animal
# Create an object d1 = Dog("Rex")
# Call d1.speak()

class Animal:
    def __init__(self,name):
        self.name=name
    def speakNmae(self):
        print (self.name)
        

class Dog(Animal):
    def __init__(self, name,age):
        super().__init__(name)

        self.age=age

    def printDog(self):
        print(self.name,self.age)

d1=Dog("Rex",24)
d1.speakNmae()
d1.printDog()