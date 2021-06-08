#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);
    
    int ans = x % 2;
    
    printf("%d\n", ans);
    return 0;
}