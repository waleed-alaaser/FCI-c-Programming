#include <stdio.h>

int main(void)
{
    int x,y,total;
    scanf("%d %d", &x, &y);
    
    if (y % x == 0)
    {
        total = y / x;
        printf("%d\n", total);
    }
    else
        printf("Not Multiple\n");
}