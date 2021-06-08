#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);
    
    if (x >= 90)
        printf("A\n");
    
    else if (x >= 75)
        printf("B\n");
        
    else if (x >= 60)
        printf("C\n");
        
    else if (x >= 50)
        printf("D\n");
        
    else
        printf("F\n");
        
    return 0;
}