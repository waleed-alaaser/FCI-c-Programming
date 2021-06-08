#include <stdio.h>

int main(void)
{
    int x,rem,temp,i;
    int total = 0;
    scanf("%d", &x);
    
    printf("1");
    for (i = 2; i <= x; i++)
    {
    temp = i;
    while (temp > 0)
    {
        rem = temp % 10;
        total = total + (rem * rem * rem);
        temp = temp / 10;
        
    }
    if (i == total)
    {
        printf(", %d", total);
    }
    total = 0;
    }
    printf("\n");
}