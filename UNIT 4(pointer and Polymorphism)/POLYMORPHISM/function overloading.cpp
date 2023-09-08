 
/*
 
 
 
Function Overloading
 
 
*/
 
#include<iostream>
 
using namespace std;
 
class Addition
 
{
 
    private:
 
        int a,b;
 
    public:
 
        void getdata()
 
        {
 
            a=100;
 
            b=200;
 
        }
 
        void getdata(int x)
 
        {
 
            a=x;
            b=300;
 
        }
 
        void getdata(int m,int n)
 
        {
 
            a=m;
 
            b=n;
 
        }
 
        void display()
 
        {
 
            cout<<"Addition Of Two number="<<(a+b);
 
        }
 
};
 
int main()
 
{
 
    Addition a1,a2,a3;
 
    a1.getdata();
 
    a2.getdata(400);
 
    a3.getdata(500,600);
 
    cout<<"\nObject a1:";a1.display();
 
    cout<<"\nObject a2:";a2.display();
 
    cout<<"\nObject a3:";a3.display();
 
    return 0;    
 
}
 
 
 
 
