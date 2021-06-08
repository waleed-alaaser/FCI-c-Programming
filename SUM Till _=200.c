#include <stdio.h>

int main(void)
{
    int x;
    int total = 0;
    do
    {
        scanf("%d", &x);
        total += x;
        if (total >= 200)
        {
            printf("%d", total);
            return 0;
        }
    }
    while(x < 200);
}