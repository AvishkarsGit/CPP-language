 
//Sum of Digits
 
#include<iostream>
 
using namespace std;
 
int main()
 
{
 
    int no,rem,sum=0;
 
    cout<<"\nEnter Any Integer Number:";
 
    cin>>no;
 
    while(no>0)
 
    {
 
        rem=no%10;
 
        sum=sum+rem;
 
        no=no/10;
 
    }
 
    cout<<"\nSum of digits="<<sum;
 
    return 0;
 
}
 
