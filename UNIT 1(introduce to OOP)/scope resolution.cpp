#include<iostream>
using namespace std;
int a=200;      //global varible
int main()
{
  int a=100;    //local variable
  cout<<"\nValue of local a="<<a;
  cout<<"\nValue of global a="<<::a;
  return 0;
}
