 
// Single Inheritance-1
 
#include<iostream>
 
using namespace std;
 
class Base
 
{
 
    protected:
 
        int a,b;
 
    public:
 
      void getdata()
 
      {
 
          a=100;
 
          b=500;
 
          
 
      }
 
};
 
class Derived:public Base
 
{
 
    private:
 
        int c;
 
    public:
 
      void display()
 
     {
 
        c=a+b;
 
        cout<<"\n Addition Of Two Number="<<c;
 
     }
 
};
 
int main()
 
{
 
    Derived d1;
 
    d1.getdata();
 
    d1.display();
 
    return 0;    
 
}
 
