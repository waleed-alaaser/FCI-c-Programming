#include <stdio.h>

int main(void)
{
    char a,b,c,d,e;
    scanf("%c%c%c%c%c", &a, &b, &c, &d, &e);

    if (a == e && b == d)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
}
