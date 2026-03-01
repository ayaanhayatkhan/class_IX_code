#include<stdio.h>
int main()
{
// take a number from user in do while loop and check whether its even or odd.

int a , b;
b = 0;

do
{

printf("\nEnter s number ");
scanf("%d",&a);
if (a%2 == 0)
printf("\nThe number is even");
else
printf("\nThe number is odd");

b++;

} while (b<=5);






}