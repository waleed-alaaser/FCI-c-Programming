#include <stdio.h>

int main(void)
{
    int num1,num2,num3,total;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    
    total = num1 + num2 + num3;
    
    printf("Sum: %d\n", total);
    return 0;
}