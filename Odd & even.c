#include <stdio.h>

int main(void)
{
    int x;
    int sum = 0;
    int product = 1;
    scanf("%d", &x);
    
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 != 0)
        {
            product = product * i;
        }
        else
        {
            sum = sum + i;
        }
    }
    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);
}