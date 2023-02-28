#include <stdio.h>

int main() {
    double num1;
    double num2;
    char sign;
    
    printf("which operation do you want to perform?:");
    scanf("%c", &sign);
    
    printf("Enter the first input value: ");
    scanf("%lf", &num1);
    
    printf("Enter the second input value: ");
    scanf("%lf", &num2);
    
    //printf("%lf, %lf", num1, num2);
    
    if (sign == '+')
        {
        printf("The sum of %.2lf + %.2lf = %.2lf ", num1, num2, num1+num2);
        }
    else if (sign == '-')
        {
         printf("The sum of %.2lf - %.2lf = %.2lf ", num1, num2, num1-num2);
        }
    else if (sign == '*')
        {
         printf("The sum of %.2lf * %.2lf = %.2lf ", num1, num2, num1*num2);
        }
    else if (sign == '/')
        {
         printf("The sum of %.2lf / %.2lf = %.2lf ", num1, num2, num1/num2);
        }
    else
        {
            printf("invalid sign,Enter a valid sign");
        }
    // Write C code here
    //printf("Hello world");

    return 0;
}
