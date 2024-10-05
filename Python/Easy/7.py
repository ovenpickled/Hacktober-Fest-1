None1 = "some_value"
if None1 == "some_value":
    print("This shouldn't work, None is a keyword!")
True1 = 1
if True1: 
    print("This will cause an error because 'True' is a reserved keyword.")

def form(x):
    return x * 2

result = form(5)
print(result)  

if result > 5:
    print("You can't use 'return' as a variable name!")

class1="AdvancedPython"
print("This won't work because 'class' is a reserved keyword in Python.")

