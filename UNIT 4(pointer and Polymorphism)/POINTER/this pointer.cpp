#include <iostream>
using namespace std;
class thispointer
{
  private:
    int a,b;
  public:
    void getdata();
    void putdata();
};
void thispointer::getdata()
{
  cout<<"\nEnter value of a:";
  cin>>a;
  cout<<"\nEnter value of b:";
  cin>>b;
}
void thispointer::putdata()
{
  cout<<"\nValue of a & b before swap:";
  cout<<"\na="<<a<<"  b="<<b;
  this->a=this->a+this->b;
  this->b=this->a-this->b;
  this->a=this->a-this->b;
  cout<<"\n\nValue of a & b after swap:";
  cout<<"\na="<<this->a<<"  b="<<this->b;
}
int main()
{
  thispointer t1;
  t1.getdata();
  t1.putdata();
  return 0;
}