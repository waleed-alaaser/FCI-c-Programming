#include <stdio.h>

int main(void)
{
    int x;
    int total = 1;
    scanf("%d", &x);
    
    for (int i = 1; i <= x; i++)
    {
        total = total * i;
    }
    printf("%d\n", total);
}