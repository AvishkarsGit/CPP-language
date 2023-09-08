#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"\nEnter two number :";
  cin>>a>>b;
  cout<<"\nBefore swapping :";
  cout<<"\na="<<a<<"  b="<<b;
  cout<<"\n-----------------";
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"\nAfter swapping :";
  cout<<"\na="<<a<<"  b="<<b;
  return 0;
}