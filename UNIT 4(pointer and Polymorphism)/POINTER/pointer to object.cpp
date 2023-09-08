/* 
     Pointer To objects 
*/ 
#include<iostream>
using namespace std;
class Item 
{ 
    private:
       int a,b; 
    public:
      void getdata(int m,int n)
      {
          a=m; 
          b=n; 
      } 
      void dispaly() 
     { 
          cout<<"\nValue of a="<<a; 
          cout<<"\nValue of b="<<b; 
      }     
}; 
int main()
{
    Item x;
    Item *ptr;
    ptr=&x;
    ptr->getdata(100,300);
    ptr->dispaly(); 
    return 0;
}

