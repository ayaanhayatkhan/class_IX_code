#include<iostream>
using namespace std;
int main()
{
int a , b , c , l ;
cout<<"Enter three numbers ";
cin>>a>>b>>c;
if (a>b)
l = a;
else
l = b;
if (l>c)
cout<<"The largest number is "<<l;
else
cout<<"The largest number is "<<c;


return 0;




}