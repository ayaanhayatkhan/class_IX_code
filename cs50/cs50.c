#include "cs50.h"

string get_string(const char *prompt)
{
    static char input[100];

    printf("%s", prompt);
    fgets(input, sizeof(input), stdin);

    return input;
}