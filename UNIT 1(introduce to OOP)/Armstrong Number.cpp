 
//ArmStrong number
 
#include<iostream>
 
using namespace std;
 
int main()
 
{
 
    int no,rem,sum=0,cube,temp;
 
    cout<<"\nEnter Any Integer Number:";
 
    cin>>no;
 
    temp=no;
 
    while(no>0)
 
    {
 
        rem=no%10;//
 
        cube=rem*rem*rem;
 
        sum=sum+cube;
 
        no=no/10;
 
    }
 
    if(temp==sum)
 
    {
 
        cout<<"\nNumber is Armstrong!!!";
 
    }
 
    else
 
    {
 
        cout<<"\nNumber is not Armstrong!!!";
 
    }
 
}
 
