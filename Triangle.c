#include <stdio.h>

int main(void)
{
    int x,y,z;
    scanf("%i%i%i", &x, &y, &z);
    
    if ((x + y) > z && (y + z) > x && (x + z) > y)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}