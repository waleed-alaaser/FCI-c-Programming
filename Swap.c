#include <stdio.h>

int main(void)
{
    int num1,num2;
    printf("X = ");
    scanf("%d", &num1);
    printf("Y = ");
    scanf("%d", &num2);
    
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    
    printf("X = %d\nY = %d\n", num1, num2);
    return 0;
}