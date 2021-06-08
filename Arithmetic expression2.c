#include <stdio.h>

int main(void)
{
    int a,b,c,d,e,f,g;
    printf("A = ");
    scanf("%d", &a);
    
    printf("B = ");
    scanf("%d", &b);
    
    printf("C = ");
    scanf("%d", &c);
    
    printf("D = ");
    scanf("%d", &d);
    
    printf("E = ");
    scanf("%d", &e);
    
    printf("F = ");
    scanf("%d", &f);
    
    printf("G = ");
    scanf("%d", &g);
    
    int total = (a + b / c * d - e) * (f - g);
    printf("Result: %d\n", total);
    return 0;
}