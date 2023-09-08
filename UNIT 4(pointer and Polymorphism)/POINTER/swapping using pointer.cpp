#include<iostream>
using namespace std;
int main()
{
  int a,b,temp;
  int *p1,*p2;
  p1=&a;
  p2=&b;
  cout<<"\nEnter value of a & b:";
  cin>>a>>b;
  cout<<"\nBefore Swapping value of a & b:";
  cout<<"\na="<<*p1<<"\tb="<<*p2;
  temp=*p1;
  *p1=*p2;
  *p2=temp;
  cout<<"\n\nAfter Swapping value of a & b:";
  cout<<"\na="<<*p1<<"\tb="<<*p2;
  return 0;
}