#include<iostream>
using namespace std;
int main()
{
  int a=102;
  int *p1;
  p1=&a;
   cout<<"\nValue of a="<<a;
  *p1=*p1+120;
  cout<<"\nValue of a="<<a;
  return 0;
}
