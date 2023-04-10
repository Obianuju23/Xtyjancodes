# Programming Task
# Task

# Create a class named Triangle.
# Create an object from it. The object will have three attributes named a, b and c that represent the sides of the triangle.
# The Triangle class will have two methods:
# The __init__() method to initialize the sides
# A Method to calculate the perimeter of the triangle from its sides
# The perimeter of the triangle should be printed from outside the class
# Here's the barebone for this program:

# class Triangle:
#     def __init__(self, a, b, c):
#         # write code here
#         pass
    
#     # write code here
    
# t1 = Triangle(3, 4, 5)
# # write code here

#SOLUTION


class Triangle:
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c
    def calc_perimeter(self):
        perimeter = self.a + self.b + self.c
        return perimeter
    
t1 = Triangle(3, 4, 5)
perimeter = t1.calc_perimeter()
print("The perimeter of the t1 triangle is: ", perimeter)

t2 = Triangle(7,9,11)
perimeter = t2.calc_perimeter()
print("The perimeter of the t2 triangle is: ", perimeter)
