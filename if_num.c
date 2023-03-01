#include <stdio.h>
int main()
{
    double num;
    
        printf("input number:");
        scanf("%lf", &num);
     if (num < 0)
        {
        printf("The number is negative");
        }
    else if (num == 0)
        {
        printf("The number is zero");
        }
    else
        {
        printf("The number is positive");
        }

    return 0;
}


/*create a program to check whether a number is positive, negative or 0.
hints: create a variable named number and assign a double value to it based on the user input. Then using the if statement check whether a number is positive o, negative or 0.
If the number is positive,print "The number is positive"
If the number is negative,print "The number is negative"
If the number is 0,print "The number is zero"*/
