#include<iostream>
using namespace std;
int main()
{
int a , b , i;

i = 0;

do
{
    
    cout<<"\nEnter a number ";
cin>>a;

b=a%2;
if (b>0)
{
    cout<<"\nThe number is odd.";
}

else 
{
        cout<<"\nThe number is even.";

        
}
i++;

} while (b!=0 );


return 0;



}