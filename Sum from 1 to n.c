#include <stdio.h>

int main(void)
{
    int x,total;
    scanf("%d", &x);
    
    total = x * (x+1) / 2;
    
    printf("%d\n", total);
    return 0;
}