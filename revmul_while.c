#include <stdio.h>

int main() {
    
    int number;
    int count =12;
   
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (count >= 1)
    {
        int product = number*count;
        printf("%d X %d = %d\n", number, count, product);
        count = count - 1;
    }
    return 0;
}


/*Create a program that prints the multiplication table
for a given number.print the number from 12 to 1.*/
