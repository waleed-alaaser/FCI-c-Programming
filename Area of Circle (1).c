#include <stdio.h>
#define Pi 3.14159265359

int main(void)
{
    float r,total;
    scanf("%f", &r);
    
    total = Pi * (r * r);
    
    printf("%.2f\n", total);
    return 0;
}