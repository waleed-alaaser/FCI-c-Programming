#include <stdio.h>

int main(void)
{
    char c;
    scanf("%c", &c);
    
    if (c >= '0' && c <= '9')
        printf("Digit\n");
        
    else if (c >= 'a' && c <= 'z')
        printf("Small letter\n");
        
    else if (c >= 'A' && c <= 'Z')
        printf("Capital letter\n");
    
    else
        printf("Special symbol\n");
        
    return 0;
}