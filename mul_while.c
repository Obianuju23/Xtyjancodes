#include <stdio.h>

int main() {
    int num;
    int mul = 0;
    
    printf("Enter the multiplication table  to be displayed:");
    scanf("%d", &num);
    
    
    while (mul <= 12)
        {
        printf("%d X %d = %d\n", num, mul, num * mul);
        mul++;
        }
        
        
    return 0;
}








#include <stdio.h>

int main() {
    
    int number;
    int count =1;
   
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (count < 13)
    {
        int product = number*count;
        printf("%d X %d = %d\n", number, count, product);
        count = count + 1;
    }
    return 0;
}
