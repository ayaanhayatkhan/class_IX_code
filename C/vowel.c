#include<stdio.h>
int main ()
{
char ch;
printf("Enter a character ");
scanf("%c",&ch);

switch (ch)
{
case 'a':
    printf("vowel a");
    break;

    case 'e':
    printf("vowel e");
    break;
case 'o':
    printf("vowel o");
    break;
case 'i':
    printf("vowel i");
    break;
case 'u':
    printf("vowel ");
    break;

default:

printf("not a vowel");
    
}



}