#include <stdio.h>

int main(void)
{
    int x;
    float y;
    float total = 0;
    do
    {
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &x);
        
        if (x == -1)
        {
            break;
        }
        
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &y);
    
        if (x <= 40)
        {
            total = x * y;
            printf("Salary is $%.2f\n", total);
        }
    
        else if (x > 40)
        {
            total = 40 * y;
            x = x - 40;
            y = 1.5 * y;
            total = total + (x * y);
            printf("Salary is $%.2f\n", total);
        }
        
        printf("\n");
    }
    while (x > 0);
}