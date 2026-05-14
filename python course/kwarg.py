def myfunction(*kids):
 print ("childs are "+ kids[2])   


myfunction("saran","abilesh","keerithi")


def printArg(*args):
 print ("Type ",type(args))
 print ("1st arga" +args[0])

printArg("hello","super")

def printNum(*args):
  print (args)
  print("type ",type(args))
printNum(1)

def regularWithArgs(greeting,*args):
 
    print ("type",type(greeting))
    print ("type arg",type(args))
    print("ist args" + args[1])
    for name in args:
      print(greeting,   name)
regularWithArgs("hello","how are you","namste")


def keywordArg_and_regular(username ,**kwargs):
  print("username :"+username)
  print ("type of ",type(kwargs))
  for key ,values in kwargs.items():
    print('key:',key,'value',values)


keywordArg_and_regular("vijith",age=30,education="Ms ")