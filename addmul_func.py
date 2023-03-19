#Programming Task
#Can you create a program to add and multiply two numbers?

#For this, create two functions add_numbers() and multiply_numbers(). These functions should compute the result and return them to the function call and should print from outside the function.

def add_numbers(num1, num2):
    Total = num1 + num2
    return Total
    
def multiply_numbers(num1, num2):
    Product = num1 * num2
    return Product
    
#number1, number2 = input("Enter two numbers: ").split()   
number1 = 10
number2 = 15

Total_result = add_numbers(number1, number2) 
Product_result = multiply_numbers(number1, number2)

print("The sum of the numbers is: ", Total_result)
print("The product of the numbers is: ",Product_result)
