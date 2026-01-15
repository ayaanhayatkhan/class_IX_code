// write a program to accept two number from user and perfoarm the operation as enter by user

#include<stdio.h>
int main()
{
int a , b;
char op;
printf("Enter two numbers \n");
scanf("%d%d",&a,&b);
printf("Enter an option + , - , * , / \n");
scanf(" %c",&op);
//op = getchar();
printf("\nYou entered: %c",op);
switch (op)
{
case '+':
    printf("sum is =%d", a + b);
    break;

    case '-':
    printf("subtract is =%d", a - b);
    break;

    case '*':
    printf("multplying is =%d", a * b);
    break;

    case '/':
    printf("division is =%d", a / b);
    break;

default:
printf("You entered an invaled character");
    break;
}

}