#include<iostream>
using namespace std;
int main()
{
  int a[5],i;
  int *p;
  p=&a[0];
  cout<<"\nEnter 5 Array Elements:";
  for(i=0;i<5;i++)
  {
    cin>>a[i];
  }
  cout<<"\nYour Array Elements:";
  for(i=0;i<5;i++)
  {
    cout<<"\t"<<a[i];
  }
  return 0;
}
