#include <stdio.h>

int main(void)
{
    int x;
    printf("Select the number of Shape: ");
    scanf("%i", &x);
    
    if (x == 1)
    {
        printf("*********\n");
        printf("*       *\n");
        printf("*       *\n");
        printf("*       *\n");
        printf("*       *\n");
        printf("*       *\n");
        printf("*       *\n");
        printf("*       *\n");
        printf("*********\n");
    }
    else if (x == 2)
    {
        printf("   ***   \n");
        printf(" *     * \n");
        printf("*       *\n");
        printf("*       *\n");
        printf("*       *\n");
        printf("*       *\n");
        printf("*       *\n");
        printf(" *     * \n");
        printf("   ***   \n");
    }
    else if (x == 3)
    {
        printf("  *  \n");
        printf(" *** \n");
        printf("*****\n");
        printf("  *  \n");
        printf("  *  \n");
        printf("  *  \n");
        printf("  *  \n");
        printf("  *  \n");
        printf("  *  \n");
    }
    else if (x == 4)
    {
        printf("    *    \n");
        printf("   * *   \n");
        printf("  *   *  \n");
        printf(" *     * \n");
        printf("*       *\n");
        printf(" *     * \n");
        printf("  *   *  \n");
        printf("   * *   \n");
        printf("    *    \n");
    }
}