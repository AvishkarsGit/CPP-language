 
/*
 
Write a C++ program to swap the values of two variables using friend function.
 
*/
 
#include<iostream>
 
using namespace std;
 
class FriendDemo
 
{
 
    private:
 
        int a,b;
 
    public:
 
        void getdata()
 
        {
 
            cout<<"\nEnter value of a:";
 
            cin>>a;
 
            cout<<"\nEnter value of b:";
 
            cin>>b;
 
        }    
 
        friend void swap(FriendDemo fd)
 
        {
 
            int temp;
 
            temp=fd.a;
 
            fd.a=fd.b;
 
            fd.b=temp;
 
            cout<<"\n***After swappning Value of a & b***";
 
            cout<<"\nValue of a="<<fd.a;
 
            cout<<"\nValue of b="<<fd.b;    
 
        }
 
};
 
int main()
 
{
 
    FriendDemo f1;
 
    f1.getdata();
 
    swap(f1);
 
    return 0;
 
}
 
