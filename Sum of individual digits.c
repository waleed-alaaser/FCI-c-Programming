#include <stdio.h>

int main(void)
{
    int x,total = 0;
    scanf("%d", &x);
    
    total = x % 10;
    x = x / 10;
    
    total = total + x % 10;
    x = x / 10;
    
    total = total + x;
    
    printf("%d\n", total);
    return 0;
}