 
//Constructor Overloading
 
#include<iostream>
 
using namespace std;
 
class Code
 
{
 
    private:
 
        int id;
 
    public:
 
        Code()          //default constructor
 
        {
 
            id=100;
 
        }
 
        Code(int x)        //Parameterized constructor
 
        {
 
            id=x;
 
        }
 
        Code(Code &m)    //Copy Constructor
 
        {
 
            id=m.id;
 
        }
 
        void display()
 
        {
 
            cout<<"ID="<<id;
 
        }
 
};
 
int main()
 
{
 
    Code c1;
 
    Code c2(200);
 
 
    cout<<"\nObject C1:";
 
    c1.display();
 
    cout<<"\nObject C2:";
 
    c2.display();
 
    cout<<"\nObject C3:";
 
    c3.display();
 
    return 0;
 
}
 
