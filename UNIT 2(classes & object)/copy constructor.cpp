 
//Copy Constructor
 
#include<iostream>
 
using namespace std;
 
class Code
 
{
 
    private:
 
        int id;
 
    public:
 
        Code()        //default constructor
 
        {
 
            id=100;
 
        }
 
        Code(Code &m)  //copy constructor
 
        {
 
            id=m.id;    
 
        }
 
        void display()
 
        {
 
            cout<<"="<<id;
 
        }        
 
};
 
int main()
 
{
 
    Code c1;
 
    Code c2(c1);
 
    cout<<"\nc1 object Value";
 
    c1.display();
 
    cout<<"\nc2 object Value";
 
    c2.display();
 
    return 0;
 
}
 
