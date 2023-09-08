 
/*
 
 
Function Overloading-2.
 
 
 
*/
 
#include<iostream>
 
using namespace std;
 
class FunctionOverloadingDemo
 
{
 
    private:
 
        int x,y,z;
 
    public:
 
        void display(int m)
 
        {
 
            x=m;
 
            cout<<"\nvalue of x="<<x;
 
        }
 
        void display(int p,int q)
 
        {
 
            x=p;
 
            y=q;
 
            cout<<"\nvalue of x="<<x;
 
            cout<<"\nvalue of y="<<y;
 
        }
 
        void display(int a,int b,int c)
 
        {
 
            x=a;
 
            y=b;
 
            z=c;
 
            cout<<"\nvalue of x="<<x;
 
            cout<<"\nvalue of y="<<y;
 
            cout<<"\nvalue of z="<<z;
 
        }
 
};
 
int main()
 
{
 
    FunctionOverloadingDemo f1,f2,f3;
 
    cout<<"\nObject f1: ";f1.display(100);
 
    cout<<"\nObject f2: ";f2.display(100,200);
 
    cout<<"\nObject f3: ";f3.display(400,500,600);
 
    return 0;
 
}
 
 
