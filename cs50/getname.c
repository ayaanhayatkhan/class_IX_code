#include "ayaan.h"
#include "cs50.h"

int main()
{
    char name[20];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Your name is = %s", name);

    string fathername = get_string("Enter your father's name: ");
    printf("Hello, %s", fathername);

    return 0;
}