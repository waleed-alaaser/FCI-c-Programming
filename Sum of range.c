#include<stdio.h>
#include<math.h>
int main(void)
{
    long long x,y;
    scanf("%lli", &x);
    scanf("%lli", &y);
    
    long long sum1 = x * (x+1) / 2;
    long long sum2 = y * (y+1) / 2;
    
    long long total = (sum2 - sum1) + x;
    
    printf("%lli\n", total);
    
}