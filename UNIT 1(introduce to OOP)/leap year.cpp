#include<iostream>
using namespace std;
int main()
{
  int No;
  cout<<"\nEnter year :";
  cin>>No;
  if(No%2==0)
  {
    cout<<"\n"<<No<<" is Leap Year!!";
  }
  else
  {
    cout<<"\n"<<No<<" is Not Leap Year!!";
  }
   return 0;
}