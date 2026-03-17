#include<stdio.h>
int main()
{
float a , b ;
printf("Enter a value for a ");
scanf("%f",&a);
printf("Enter a value for b ");
scanf("%f",&b);

float sum = a + b;
float mul = a * b;
float sub = a - b;
float div = a / b;
float first_squr= a*a ;
float second_squr = b*b;

printf("Sum of a and b = %.2f\n",sum);
printf("Multiplication of a and b = %.2f\n",mul);
printf("Subtraction of a and b = %.2f\n",sub);
printf("Dvision of a and b = %.2f\n",div);
printf("1st Number Square = %.2f\n",first_squr);
printf("2st Number Square = %.2f\n",second_squr);


return 0;


}