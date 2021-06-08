#include <stdio.h>

int main(void)
{
    int x,i;
    int temp1 = 0;
    int temp2 = 1;
    int temp3;
    
    scanf("%d", &x);
    
    for(i = 0; i < x; i++)
    {
        if(i == 0)
        {
            printf("0 ");
            continue;
        }
        
        if(i == 1)
        {
            printf("1 ");
            continue;
        }
        printf("%d ", temp1 + temp2);
        temp3 = temp1;
        temp1 = temp2;
        temp2 = temp3 + temp2;
    }
}