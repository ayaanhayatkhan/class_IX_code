#include<stdio.h>
int main()
{
char name[5] ;
int age;
printf("Enter your name\n");
gets(name);
printf("Enter your age in years");
scanf("%d",&age);
printf("your age in months = %d",age*12);



return 0;

}