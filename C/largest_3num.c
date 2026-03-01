#include<stdio.h>
int main()
{

int a , b , c , l ;
printf("Enter  three numbers = ");
scanf("%d%d%d",&a ,&b,&c);
if (a>b)
l = a;
else
l = b;
if (l>c)
printf("\nLargest number is %d",l);
else
printf("\nLargest number is %d",c);

return 0;


}