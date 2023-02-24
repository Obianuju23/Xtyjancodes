#include <stdio.h>

int print_num()
{
    int num;
    int odd;
    int sum_odd;
    
    for (num = 1; num <= 100; num++)
    {  
        if (num % 2 ==1)    
        
        {
        odd = num;
        sum_odd += num;
        }
        
    printf("%d ", num);
    }
    printf("\n");
    printf("%d\n", sum_odd);
    }
int main() {
    // Write C code here
    print_num();
    
    return 0;
}
