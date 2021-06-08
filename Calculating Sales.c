#include <stdio.h>

int main(void)
{
    int x,y,z,i;
    float total;
    float final = 0;
    scanf("%d", &x);
    
    for (i = 0; i < x; i++)
    {
        scanf("%d %d", &y, &z);
        if (y == 1)
        total = 2.98 * z;
        
        else if (y == 2)
        total = 4.5 * z;
        
        else if (y == 3)
        total = 9.98 * z;
        
        else if (y == 4)
        total = 4.49 * z;
        
        else
        total = 6.87 * z;
        
        final = final + total;
        }
        printf("Total retail = %.2f\n", final);
}