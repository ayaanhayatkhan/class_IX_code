#include<stdio.h>
int main()
{
int a , b ;
b =0;
for (a=1 ; a <= 50; a=a+2)
{
b = b +a;
}
printf("sum of odd number from 1 to 50 is %d\n",b);


int x , y;
y= 0 ;

for (x=2 ; x <= 50; x=x+2)
{
y = y +x;
}
printf("sum of even number from 1 to 50 is %d\n",y);

puts("My country is Pakistan");


return 0;

}