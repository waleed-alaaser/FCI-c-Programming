#include <stdio.h>

int main(void)
{
    int x,y,GCD,i;
    scanf("%d", &x);
    scanf("%d", &y);
    
    if (x > y)
    {
        for (i = 1; i <= y; i++)
        {
            if(x % i == 0 && y % i == 0)
            {
                GCD = i;
            }
        }
    }
    
    else if (x < y)
    {
        for (i = 1; i <= x; i++)
        {
            if (x % i == 0 && y % i == 0)
            {
                GCD = i;
            }
        }
    }
    
    else
    {
        GCD = x;
    }
    printf("%d\n", GCD);
    return 0;
}