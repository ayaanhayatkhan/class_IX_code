#include<stdio.h>

int main()
{
    int i = 0;

    for(i = 0; i < 5; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // ------------------------

    for(int x = 4; x >= 0; x--)
    {
        for(int y = 0; y <= x; y++)
        {
            printf("*");
        }
        printf("*\n");
    }

    return 0;
}