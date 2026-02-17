#include<iostream>
using namespace std;
int main()
{
int a , x;
cout<<"Enter a number ";
cin>>x;
for (a=1; a<=10; a++)
{
cout<<"\n"<<x<<"X"<<a<<"="<<a*x ;

}

cout<<"\n*****************************";

for (a=10; a>=1; a--)
{
cout<<"\n"<<x<<"X"<<a<<"="<<a*x ;

}


}