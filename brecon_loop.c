#include <stdio.h>

int main(){
    
while (1){
    int number;
    printf("\nEnter a number: ");
    scanf("%d", &number);
/*if (number < 0 && number % 2 == 1) {
                printf("%d", number);
            }*/
if (number < 0 && number % 2 !=0){
    printf("%d", number);
}

else if (number >= 0) {
    printf("Positive Value");
    break;
}
else if (number < 0 && number % 2 == 0)
{
printf("Negative Even");
continue;
}

}
return 0;
}



/*Programming Task
Q. Can you write a program that takes an input from the user and prints it if the value is a negative odd number?

if the input value is positive, end the loop with message, Positive Value.
And, if the input value is negative even, skip the value with message, Negative Even.*/
