#include <stdio.h>

int main(void)
{
    int x,i,j,k;
    
    scanf("%d", &x);
    
    if (x == 1)
    {
        for (i = 0; i < 10; i++)
        {
            printf("*");
            for (j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    
    if (x == 2)
    {
        for (i = 0; i < 10; i++)
        {
            printf("*");
            for (j = 0 + i; j < 9; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    
    if (x == 3)
    {
        for (i = 0; i < 10; i++)
        {
            for (j = 9 - i; j < 9; j++)
            {
                printf(" ");
            }
            for (k = 0 + i; k < 10; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    
    if (x == 4)
    {
        for (i = 0; i < 10; i++)
        {
            for (j = 0 + i; j < 9; j++)
            {
                printf(" ");
            }
            for (k = 9 - i; k < 10; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    
    if (x == 5)
    {
        for (i = 0; i < 5; i++)
        {
            for (j = 0 + i; j < 4; j++)
            {
                printf(" ");
            }
            
            printf("*");
            
            for (k = 5 - i; k < 5; k++)
            {
                printf("**");
            }
            printf("\n");
        }
        
        for (i = 0; i < 4; i++)
        {
            for (j = 3 - i; j < 4; j++)و
            {
                printf(" ");
            }
            
            printf("*");
            
            for (k = 1 + i; k < 4; k++)
            {
                printf("**");
            }
            printf("\n");
        }
    }
}