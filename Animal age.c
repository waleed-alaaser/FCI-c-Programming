#include <stdio.h>

int main(void)
{
    int total;
    scanf("%d", &total);
    
    int years = total / 365;
    int months = (total - (years * 365)) / 30;
    int days = (total - (years * 365)) % 30;
    
    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);
    return 0;
}