# Write a Python program that prompts the user to enter a positive integer and outputs the sum of all even numbers from 1 to that integer.



Number = int(input("Enter positive integer: ") )
sum = 0
for i in range(2, Number+1):
    if i % 2 == 0:
        sum = sum + i
print("The sum of all even numbers from 1 to the number inputted is:", sum)
    
    
#num = int(input("Enter a number: "))
# sum = 0
# for i in range(2, num):
#     if i % 2 == 0:
#         sum+= i
# print(sum)
