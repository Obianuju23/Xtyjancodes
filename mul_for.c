#include <stdio.h>

int main() {
    int num;
    int mul;
    
    printf("Enter the multiplication table  to be displayed:");
    scanf("%d", &num);
    
    for (mul=0; mul<=12; mul++)
        printf("%d X %d = %d\n", num, mul, num * mul);
        
    return 0;
}
