#include <stdio.h>

int main(void)
{
    int x;
    int total = 0;
    scanf("%i", &x);
    if(x % 10 == 7)
    {
        total++;
    }
    x = x / 10;
    if(x % 10 == 7)
    {
        total++;
    }
    x = x / 10;
    if(x % 10 == 7)
    {
        total++;
    }
    x = x / 10;
    if(x % 10 == 7)
    {
        total++;
    }
    x = x / 10;
    if(x % 10 == 7)
    {
        total++;
    }
    printf("%i\n", total);
}