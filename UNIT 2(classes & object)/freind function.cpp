 
/*
 
Write a C++ program to define class "Distance" having data member as meters. 
 
Display the addition of two distance objects using friend function.
 
*/
 
#include<iostream>
 
using namespace std;
 
class Distance
 
{
 
    private:
 
        int meters;
 
    public:
 
        void getDistance()
 
        {
 
            cout<<"\nEnter Distance in Meter:";
 
            cin>>meters;
 
        }    
 
        friend void addDistance(Distance m,Distance n);
 
};
 
void addDistance(Distance m,Distance n)
 
{
 
    int add;
 
    add=m.meters+n.meters;
 
    cout<<"\nAddition of Two Distance="<<add;    
 
}
 
int main()
 
{
 
    Distance d1,d2;
 
    d1.getDistance();
 
    d2.getDistance();
 
    addDistance(d1,d2);
 
    return 0;
 
}
 
 
