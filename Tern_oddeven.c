#include <stdio.h>
int main()
{
    int num;
    
        printf("input number:");
        scanf("%d", &num);
    (num % 2 == 1)?
        printf("The number is odd"):
        printf("The number is even");
        
    return 0;
}


/*create a program to check whether a number is odd or even.
hints: Use a tenary operator to check if the number is odd or even.
If the number is odd ,print "The number is odd"
If the number is even,print "The number is even"
*/
