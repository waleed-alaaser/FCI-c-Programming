#include <stdio.h>

int main(void)
{
    int x,y,max = -1e9;
    scanf("%d", &x);
    
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &y);
        if (max < y)
            max = y;
    }
    
    printf("The maximum: %d\n", max);
    return 0;
}