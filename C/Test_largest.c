#include <stdio.h>

int main()
{
    float n1, n2, n3, largest;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    largest = n1;

    if (n2 > largest)
        largest = n2;

    if (n3 > largest)
        largest = n3;

    printf("Largest number: %.2f", largest);

    return 0;
}
