# Write a Python program that calculates the distance between two points (x1, y1) and (x2, y2) using the distance formula: d = sqrt((x2 - x1)^2 + (y2 - y1)^2)
import math
x1 = float(input("Enter the first value of x: "))
x2 = float(input("Enter the second value of x: "))
y1 = float(input("Enter the first value of y: "))
y2 = float(input("Enter the second value of y: "))
distance = math.sqrt((x2 - x1)**2 + (y2 -y1)**2)
round_distance = round(distance,2)
print("The distance between the two points is: = {:.2f}".format(round_distance))
