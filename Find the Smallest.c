#include <stdio.h>

int main(void)
{
    int x,y;
    int min = 1e9;
    scanf("%d", &x);
    
    while (x != 0)
    {
        scanf("%d", &y);
        if (min > y)
        {
            min = y;
        }
        x--;
    }
    printf("%d\n", min);
    return 0;
}