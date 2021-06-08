#include <stdio.h>

int main(void)
{
    int x,i;
    printf("Type the number of sequence you want: ");
    scanf("%d", &x);
    
    if (x == 1)
    {
        for (i = 1; i <= 1000; i++)
        {
            if (i == 1000)
            {
                printf("%d\n", i);
                break;
            }
            printf("%d, ", i);
        }
    }
    
    if (x == 2)
    {
        for (i = 3; i < 1000; i = i+5)
        {
            if (i == 998)
            {
                printf("%d\n", i);
                break;
            }
            printf("%d, ", i);
        }
    }
    
    if (x == 3)
    {
        for (i = 20; i >= -1000; i = i - 6)
        {
            if (i == -1000)
            {
                printf("%d\n", i);
                break;
            }
            printf("%d, ", i);
        }
    }
    
    if (x == 4)
    {
        for (i = 3; i <= 234375; i = i * 5)
        {
            if (i == 234375)
            {
                printf("%d\n", i);
                break;
            }
            printf("%d, ", i);
        }
    }
    
    if (x == 5)
    {
        for (i = 1; i <= 8192; i = i*2)
        {
            if (i == 8192)
            {
                printf("%d\n", i);
                break;
            }
            printf("%d, ", i);
        }
    }
}