#include <stdio.h>

int main(void)
{
    int x,y;
    printf("X = ");
    scanf("%d", &x);
    printf("Y = ");
    scanf("%d", &y);
    
    float temp1 = x + y;
    float temp2 = x - y;
    float ans1 = temp1 / temp2; 
    float ans2 = temp1 * temp2;
    
    if ((int)temp1 % (int)temp2 != 0)
        printf("Ex1: %.1f / Ex2: %.f\n", ans1, ans2);
    
    else
        printf("Ex1: %.f / Ex2: %.f\n", ans1, ans2);
        
    return 0;
}