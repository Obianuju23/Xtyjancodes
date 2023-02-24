#include <stdio.h>

int print_num()
{
    int num;
    int even;
    int sum_even;
    
    for (num = 1; num <= 100; num++)
    {  
        if (num % 2 == 0)    
        
        {
        even = num;
        sum_even += num;
        }
        
    printf("%d ", num);
    }
    printf("\n");
    printf("\n");
    printf("%d\n", sum_even);
    }
int main() {
    // Write C code here
    print_num();
    
    return 0;
}
