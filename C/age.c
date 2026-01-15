#include <stdio.h>

int main()
{
    int age, age_mon;
    char name[20];

    printf("Enter your name: ");
    gets(name);

    printf("\nEnter your age: ");
    scanf("%d", &age);

    age_mon = age * 12;

    printf("\nAge in mon = %d", age_mon);

    return 0;
}

