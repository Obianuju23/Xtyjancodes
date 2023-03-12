# Write a program that prompts the user to enter two numbers, adds them together, and then prints out the result.
number1 = int(input("Enter the first number: "))
number2 = int(input("Enter the second number: "))

Add = number1 + number2
print("The sum of", number1, "and", number2, "is", Add)
print("The sum of {} and {} is {},".format(number1,number2,Add))
