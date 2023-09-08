#include<iostream>
using namespace std;
void ak(int *x);
int main()
{
  int a=100;
  cout<<"\nBefor calling function value of a="<<a;
  ak(&a);  //actual  argument
  cout<<"\nAfter calling function value of a="<<a;
  return 0;
}
void ak(int *a)     //formal parameter
{
  *a=*a+200;
}
