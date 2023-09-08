#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char *x;
  x=new char[10];
  strcpy(x,"computer");
  cout<<"\nString is "<<x;
  return 0;
}
