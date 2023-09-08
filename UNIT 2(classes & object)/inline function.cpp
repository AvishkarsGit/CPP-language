 
/*
 Inline function
*/
 
#include<iostream>
 
using namespace std;
 
class Numbers
 
{
 
    private:
 
        int x,y;
 
    public:
 
        void getdata();
 
        void addition();
 
        void subtraction();
 
        void multiplication();
 
        void division();
 
};
 
inline void Numbers::getdata()
 
{
 
    cout<<"\nEnter Value of x & y :";
 
    cin>>x>>y;
 
}
 
inline void Numbers::addition()
 
{
 
    cout<<"\nAddition = "<<(x+y);
 
}
 
inline void Numbers::subtraction()
 
{
 
    cout<<"\nSubtraction = "<<(x-y);
 
}
 
inline void Numbers::multiplication()
 
{
 
    cout<<"\nMultiplication = "<<(x*y);
 
}
 
inline void Numbers::division()
 
{
 
    cout<<"\nDivision = "<<(x/y);
 
}
 
int main()
 
{
 
    Numbers n1;
 
    n1.getdata();
 
    n1.addition();
 
    n1.subtraction();
 
    n1.multiplication();
 
    n1.division();
 
    return 0;
 
}
 
