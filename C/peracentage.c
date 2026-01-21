// write a program to calculate a percentage and display the grade of the student


#include<stdio.h>

int main()
{
float om , tm , percentage;

printf("Enter total marks");
scanf("%f",&tm);

printf("Enter obtained marks");
scanf("%f",&om);


    percentage = (om / tm) * 100;

    printf("Percentage = %.2f ",percentage);


    if (percentage > 80)
        printf("Grade: A+");
    if (percentage >=70 && percentage <80 )
    {
        printf("Grade: A");
    }
        
if (percentage >=60 && percentage <70 )
    {
        printf("Grade: B");
    }
if (percentage >=50 && percentage <60 )
    {
        printf("Grade: C");
    }


}