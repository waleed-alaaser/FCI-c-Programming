#include <stdio.h>

int main(void)
{
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    
    if ((y * y) - 4 * x * z >= 0)
        printf("Solvable\n");
    
    else
        printf("Not solvable\n");
    
    return 0;
}