#include <stdio.h>

int print_num(int num)
{
    if (num % 2 == 1)
        printf("This is an odd number:%d", num);
    else
        printf("This is an even number: %d", num);
}

int main() {
    // Write C code here
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    print_num(num);

    return 0;
}
