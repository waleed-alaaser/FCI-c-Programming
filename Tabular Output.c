#include <stdio.h>

int main(void)
{
    printf("N\t");
    printf("10*N\t");
    printf("100*N\t");
    printf("1000*N\t\n\n");
    
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\t", i);
        printf("%d\t", i * 10);
        printf("%d\t", i * 100);
        printf("%d\n", i * 1000);
    }
    
}