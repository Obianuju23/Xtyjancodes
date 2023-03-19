# Grading Student Based on Marks Obtained by Making Functions
# Suppose you just attended a University examination. The marks you obtained in various subjects are stored in a list like this:

# marks = [55, 64, 75, 80, 65]
# You want to find the average marks you obtained in the exam.

# Based on the average marks you want to find your grade as:

# You will get Grade A if the average marks is equal to or above 80
# You will get Grade B if the average marks is equal to or above 60 and less than 80
# You will get Grade C if the average marks is equal to or above 50 and less than 60
# And if the average marks is less than 50, you will get Grade F


def average_marks(marks):
    average_score = sum(marks) / len(marks)
    return average_score
    
def compute_grades(avearge_score):
    if average_score >= 80:
        grade = 'A'
    elif  average_score >= 60: 
        grade = 'B'
    elif  average_score >= 50: 
        grade = 'C'
    else:
        grade = 'F'
    return grade    
    
marks = [55, 64, 75, 80, 65]
average_score = average_marks(marks)
print("Your average score is: ", average_score)

grade = compute_grades(average_score)
print("Your grade is: ", grade)

    
   
# if average_score >= 80:
#     print ("Your grade is A: ", average_score)
# elif average_score <80 and average_score >= 60:
#     print ("Your grade is B: ", average_score)
# elif average_score <60 and average_score >= 50:
#     print ("Your grade is C: ", average_score)
# else:
#     print ("Your grade is F: ", average_score)

