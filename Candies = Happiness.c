#include <stdio.h>

int main(void)
{
    int n,x,y;
    printf("N = ");
    scanf("%d", &n);
    
    printf("X = ");
    scanf("%d", &x);
    
    printf("Y = ");
    scanf("%d", &y);
    
    int spent = n * x;
    int profit = (n * y) - spent;
    
    printf("%d\n", profit);
    return 0;
}