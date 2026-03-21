#include<stdio.h>
int main()
{
int a , b , c ;
int l;

printf("Enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
l = a ;
else 
l=b;
if (l>c)
printf("\nThe largest number is %d",l);
else
printf("\nThe largest number is %d",c);

return 0;


}