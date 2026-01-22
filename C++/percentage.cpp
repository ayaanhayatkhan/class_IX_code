#include<iostream>

using namespace std;
int main()
{

float om , tm , percentage;

cout<<"Enter total marks: ";
    cin >> tm ;

cout<<"Enter obtained marks";
cin>> om ;


    percentage = (om / tm) * 100;

     cout<< percentage;


    if (percentage > 80)
       cout<<"Grade: A+";
    if (percentage >=70 && percentage <80 )
    {
        cout<<"Grade: A";
    }
        
if (percentage >=60 && percentage <70 )
    {
        cout<<"Grade: B";
    }
if (percentage >=50 && percentage <60 )
    {
        cout<<"Grade: C";
    }



}