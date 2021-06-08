#include <stdio.h>

int main(void)
{
    int a,b;
    printf("A=");
    scanf("%d", &a);
    
    printf("B=");
    scanf("%d", &b);
    
    if (a >= b)
        printf("Yes\n");
    
    else
        printf("No\n");
        
    return 0;
}