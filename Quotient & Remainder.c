#include <stdio.h>

int main(void)
{
    int x,y;
    printf("Enter dividend: ");
    scanf("%d", &x);
    printf("Enter divisor: ");
    scanf("%d", &y);
    
    int ans = x / y;
    int rem = x % y;
    
    printf("Quotient = %d\n", ans);
    printf("Remainder = %d\n", rem);
    return 0;
}