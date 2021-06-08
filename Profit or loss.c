#include <stdio.h>

int main(void)
{
    int n,x,y;
    scanf("%d %d %d", &n, &x, &y);
    
    if (x > y)
    {
        int loss = (n * x) - (n * y);
        printf("Loss, %d\n", loss);
    }
    
    else if (x < y)
    {
        int profit = (n * y) - (n * x);
        printf("Profit, %d\n", profit);
    }
    
    else
    {
        printf("Neither loss nor profit\n");
    }
    
    return 0;
}