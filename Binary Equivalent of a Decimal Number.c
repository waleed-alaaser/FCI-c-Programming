#include <stdio.h>
#include <math.h>

int main(void)
{
    int num;
    int rem = 0;
    int place = 1;
    int bin = 0;
    scanf("%d", &num);
    
    while(num)  
        {  
        rem   = num % 2;  
        num   = num / 2;  
        bin   = bin + (rem * place);  
        place = place * 10;  
        }
    printf("%d", bin);
    return 0;
}