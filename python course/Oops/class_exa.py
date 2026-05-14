class Myclass:
    def __init__(self,name,age):
        self.name   =name
        self.age=age
        
    def greet(self):
        print (f"hellow {self.name} ,happy b day on your {self.age} bday ")

p1=Myclass("vijith",35)
p1.greet()


#example 3

class Dog:
    def __init__(self,name,age):
        self._name=name
        self._age=age
    def bark(self):
        print(f"{self._name} barking loudley")
d1=Dog("Loosy",2)
print (f"{d1._name} age is {d1._age}")
d1.bark()


#example 3

class Car:
    def __init__(self,brand):
        self._brand=brand

        
    def show(self):
        print(f"car brand is {self._brand}")
c1=Car("Ford")
c1.show()

#class properties vs object properties

class Person:
    specics="Human"
    def __init__(self,name ):
        self._name=name
p1=Person
print(p1.specics)
#print(p1._name) #this will trow an error

p2= Person("Suresh")
print (f"the mr {p2._name} is a {p2.specics}")
        

#adding new properties
p1.name="suresh"
print(f"{p1.name}")