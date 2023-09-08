 
//Constructor with defualt argument
 
#include<iostream>
 
using namespace std;
 
class Addition
 
{
 
    private:
 
        int a,b,c;
 
    public:
 
        Addition(int x,int y=50)  //Constructor with defualt argument
 
        {
 
            a=x;
 
            b=y;
 
        }
 
        void display()
 
        {
 
            c=a+b;
 
            cout<<"\nAddition="<<c;
 
        }
 
};
 
int main()
 
{
 
    Addition a1(50);
 
    a1.display();
 
    return 0;
 
}
 
