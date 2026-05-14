x=lambda a,b:a+b
print(x(5,4))

#use case of lambda function

def myfunction(n):
    return lambda a:a*n


doubler =myfunction(3)
print(doubler(5)
      
      )

#lamda with buildin functions

numbers= [1,2,3,4,5]
doubled= list (map(lambda x:x*2,numbers))
print   (doubled)

#lambda with filters

odd_numbers=list (filter(lambda x:x%n  !=0,numbers))   
print(odd_numbers)