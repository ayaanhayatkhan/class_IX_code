#include<stdio.h>
int main()
{
int a , num;
a = 1;
do
{

printf("\nEnter a number ");
scanf("%d",&num);
if (num%2==0)
printf("\nThis number is even");
else
printf("\nThis number is odd");
a++;




} while (a<=2);









}