#include <stdio.h>

int main() {
    
    char operator;
    printf("choose an operator ['+', '-', '*', '/']: ");
    scanf("%c", &operator);
    
    double num1, num2;

    
    printf("input first value:");
    scanf("%lf", &num1);
    
    printf("input second value:");
    scanf("%lf", &num2);
    
    switch(operator)
    {
    case'+':
    printf("%lf", num1+num2);
    break;
    
    case'-':
    printf("%lf", num1-num2);
    break;
    
    case'*':
    printf("%lf", num1*num2);
    break;
    
    case'/':
    printf("%lf", num1/num2);
    break;
    
    default:
    printf("Invalid operator");
    }
    
    return 0;
}
