#include <stdio.h>

int main(void)
{
    char c;
    scanf("%c", &c);
    
    if(c <= 'z' && c >= 'a')
    {
        printf("%i\n", (int)c);
        printf("%c\n", c - 32);
    }
    else if (c <= 'Z' && c >= 'A')
    {
        printf("%i\n", (int)c);
        printf("%c\n", c + 32);
    }
    else
    printf("%i\n", (int)c);
}