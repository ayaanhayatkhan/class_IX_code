#include<stdio.h>
int main()
{

    int a , b , c ,d, l;
    printf("Enter four number \n");
    scanf("%d%d%d%d", &a , &b , &c , &d) ;

    if (a>b)
    l = a ;
    else 
     l = b;

     if (l > c)
     {
     if (l>d)

printf("Largest number is %d",l);
else
printf("Largest number is %d",d);

     }
else
l = c;
if (l>d)
printf("Largest number is %d",l);
else
printf("Largest number is %d",d);


     return 0;

}