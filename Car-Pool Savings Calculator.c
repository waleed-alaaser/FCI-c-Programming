#include <stdio.h>

int main(void)
{
    int miles;
    // x = cost per gallon
    float x;
    // y = miles per gallon
    int y;
    // z = parking fees
    float z;
    // i = tolls per day
    float i;
    scanf("%i%f%i%f%f", &miles, &x, &y, &z, &i);
    
    float cost = (miles / y) * x;
    float total = cost + z + i;
    
    printf("Cost per day = $%.2lf\n", total);
}