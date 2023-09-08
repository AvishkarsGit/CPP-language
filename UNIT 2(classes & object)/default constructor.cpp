#include<iostream>
using namespace std;
class add
{
  private:
    int a,b;
  public :
  add() 
  {
    a=100;
    b=200;
  }
  void disp()
  {
    cout<<"\nAddition="<<a+b;
  }
};
int main()
{
  add a1;
  add();
  a1.disp();
  return 0;
}