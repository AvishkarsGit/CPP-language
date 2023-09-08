#include<iostream>
using namespace std;
class code
{
  private:
    int a,b;
  public: 
    code(int x,int y)//parameterize constructor
    {
      a=x;
      b=y;
    }
    void disp()
    {
      cout<<"\nvalue of a="<<a;
      cout<<"\nValue of b="<<b;
    }
};
int main()
{
  code c1(10,20);
  c1.disp();
  return 0;
}