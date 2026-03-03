#include<stdio.h>
int main()
{

float om , tm , percentage;

printf("Enter total marks");
scanf("%f",&tm);
int i = 1;
while (i <= 3)
{

printf("\nEnter obtained marks");
scanf("%f",&om);

percentage = (om/tm)*100;

printf("Percentage =%.2f",percentage);

if (percentage>=90){
printf("\nGrade A+");
}

if (percentage>=80 && percentage<90 ){
    printf("\nGrade A");
}
i++;
// end of loop.

}







return 0;














}