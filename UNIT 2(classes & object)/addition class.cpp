 
//Write a c++ language program to create class Addition having data member a & b 
 
// perform addition using function.
 
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
 
            b=50;
 
        }
 
        void putdata()
 
        {
 
            cout<<"\nAddition of Two Numbers="<<(a+b);
 
        }
 
};
 
int main()
 
{
 
    Addition a1;
 
    a1.getdata();
 
    a1.putdata();
 
}
 
