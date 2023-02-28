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
