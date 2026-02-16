#include <stdio.h>

int main()
{
    float n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 <= n2)
    {
        if (n1 <= n3)
            printf("Smallest number: %.2f", n1);
        else
            printf("Smallest number: %.2f", n3);
    }
    else
    {
        if (n2 <= n3)
            printf("Smallest number: %.2f", n2);
        else
            printf("Smallest number: %.2f", n3);
    }

    return 0;
}
