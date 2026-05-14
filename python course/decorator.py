def changecase (func):
    def myinner():
        return func().upper()
    return myinner
@changecase
def myfunction():
    x="Hello  Sally"
    return x


print(myfunction())


#Decorator with argument

def changecase(n):
    def changecase(func):
        def myinner():
            if n==1:
                return func().lower()
            if n==2:
                return func().upper()
        return myinner
    return changecase


def addgreeting(fun):
    def myinner():
        return "Hello" + fun()+ " how are you"
    return myinner


@changecase(2)
@addgreeting
def myfunction():
    return "vijith"

def meatdaata():
    return "vijith"

print (myfunction())
print (meatdaata.__name__)
