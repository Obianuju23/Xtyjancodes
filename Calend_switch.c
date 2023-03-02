#include <stdio.h>

int main() {
    
    int number;
   
    printf("Enter a number between 1 to 12: ");
    scanf("%d", &number);
    
    switch(number)
    {
    case 1:
    printf("The month of the year is January");
    break;
    
    case 2:
    printf("The month of the year is February");
    break;
    
    case 3:
    printf("The month of the year is March");
    break;
    
    case 4:
    printf("The month of the year is April");
    break;
    
    case 5:
    printf("The month of the year is May");
    break;
    
    case 6:
    printf("The month of the year is June");
    break;
    
    case 7:
    printf("The month of the year is July");
    break;
    
    case 8:
    printf("The month of the year is August");
    break;
    
    case 9:
    printf("The month of the year is September");
    break;
    
    case 10:
    printf("The month of the year is October");
    break;
    
    case 11:
    printf("The month of the year is November");
    break;
    
    case 12:
    printf("The month of the year is December");
    break;
    
    default:
    printf("Invalid number");
    }
    
    return 0;
}




/*Use switch statement to create a program that will
find the month based on the number input.Take the
input number from 1 to 12. And print the corresponding
month based on the input value.
If number is 1, print January.
If number is 2, print February.
If number is 3, print March and so on.*/

