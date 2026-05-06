#include "ayaan.h"
#include "cs50.h"

int main()
{
char name[20];

printf("Enter your name ");
gets(name);
printf("Your name is = ");
puts( name);

char fathername[30];

{
    string fathername = get_string("What's your name ");
    printf("Hello, %s\n", fathername);
    
    return 0;
}


}