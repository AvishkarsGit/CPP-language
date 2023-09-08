#include<iostream>
using namespace std;
void ak(int x);
int main()
{
  int x=100;
  cout<<"\nBefor calling function value of a="<<x;
  ak(x);  //actual  argument
  cout<<"\nAfter calling function value of a="<<x;
  return 0;
}
void ak(int x)     //formal parameter
{
  	x=x+200;
}
