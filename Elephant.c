#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);
    
    int total = x / 5;
    
    if (x - (total * 5) > 0)
        total++;
        
    printf("%d\n", total);
    return 0;
}