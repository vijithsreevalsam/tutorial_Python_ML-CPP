"funciton inside te funciton "

def myfuncion():
    x=300
    def myInnerfun():
        print (x)

    myInnerfun()
myfuncion()



"Non local variable "

def outerFUnction():
    x=300
    def innerfunction():
        nonlocal x
        x=200
        print (x)
    innerfunction()
    print("outer x:",x)

outerFUnction()