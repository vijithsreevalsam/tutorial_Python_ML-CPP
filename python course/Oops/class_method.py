class Person:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def __str__(self):
        return f"{self.name } {self.age}" #The __str__() method is a special method that controls what is returned when the object is printed

p1=Person("sudakaran",45)
print(p1)        

#multiple methods

class Music:
    def __init__(self,name):
        self .name =name
        self.musics=[]
    def add_music(self,music):
        self.musics.append(music)

    def remove_song(self,music):
        if music in self.musics:
            self.musics.remove(music)

    def show_allsongs(self):
        print (f"playlist : {self.name}")
        for music in self.musics:
            print (f"Music is {music}")
music1=Music("malayalam")
music1.add_music("Hare govinda")
music1.add_music("kavalm ")
music1.show_allsongs()
music1.remove_song("Hare govinda")
music1.show_allsongs()


#chanllenge
# Instructions
# Inside the editor, complete the following steps:
# Create a class called Rectangle
# Add an __init__ method with width and height, and store them as properties
# Add a method called area that returns the width multiplied by the height
# Create an object r1 with width 5 and height 3
# Print the area of r1

class Rectangle:
    def __init__(self,width,height):
        self.width=width
        self.height=height
        self.area=0

    def __str__(self):
        return " this is a rectagular calcualtion"
    
    def calculate_area(self):
        self.area=self.width*self.height
        
    def get_area(self):
        self.calculate_area()
        return self.area
    

area1=Rectangle(45,25)
print(area1)

print(area1.get_area())
        