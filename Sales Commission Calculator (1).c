#include <stdio.h>

int main(void)
{
    float x, result;
    do
    {
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &x);
        if (x == -1)
        {
            return 0;
        }
        result = 200.0 + (x * 0.09);
        printf("Salary is: $%.2f\n\n", result);
    }
    while (x > 0);
}