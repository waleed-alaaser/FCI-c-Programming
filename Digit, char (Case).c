#include <stdio.h>

int main(void)
{
    char x;
    scanf("%c", &x);
    
    if (x >= 'a' && x <= 'z')
        printf("Char\nSmall\n");
    
    else if (x >= 'A' && x <= 'Z')
        printf("Char\nCapital\n");
    
    else
        printf("Digit\n");
    
    return 0;
    
}