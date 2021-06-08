#include <stdio.h>

int main(void)
{
    int x,i,y;
    int health = 100;
    scanf("%d", &x);
    
    for (i = 0; i < x; i++)
    {
        scanf("%d", &y);
        health = health - y;
    }
    if (health <= 0)
    {
        printf("Game over\n");
    }
    else
    {
        printf("Alive\n");
    }
}