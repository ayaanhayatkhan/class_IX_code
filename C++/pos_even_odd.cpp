using namespace std;
#include<iostream>
int main()
{
int num;
cout<<"\nEnter a number between -10 and 10:\t";
cin>>num;
if (num>0)
{
 cout<<num<<"is a postive number"<<endl;
 if (num %2 ==0)
 cout<<num<<"is also an even number"<<endl;
 else
  cout<<num<<"is also an odd number"<<endl;

 
}
else
 cout<<num<<"is a negative  number"<<endl;
 return 0;

}