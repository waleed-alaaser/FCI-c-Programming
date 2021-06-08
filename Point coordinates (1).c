#include<stdio.h>
int main(void)
{
    float x,y;
    scanf("%f %f",&x,&y);
    
    if(x > 0 && y > 0)
    {
        printf("Q1\n");
    }
    else if(x < 0 && y > 0)
    {
        printf("Q2\n");
    }
    else if(x > 0 && y < 0)
    {
        printf("Q4\n");
    }
    else if(x < 0 && y < 0)
    {
        printf("Q3\n");
    }
    else if(x == 0 && y == 0)
    {
        printf("Origen\n");
    }
    else if(x == 0 && y != 0)
    {
        printf("Y-axis\n");
    }
    else
    {
        printf("X-axis\n");
    }
}