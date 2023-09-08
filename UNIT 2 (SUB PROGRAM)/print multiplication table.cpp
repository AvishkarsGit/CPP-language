 
/*
 
Write a C++ program to print multiplication table
 
*/
 
#include<iostream>
 
using namespace std;
 
int main()
 
{
 
    int i,n;
    cout<<"\nEnter Number";
    cin>>n;
    cout<<"\n****MULTIPLICATION TABLE OF "<<n<<"*****";
 
    for(i=1;i<=10;i++)
 
    {
 
        cout<<"\n"<<(n*i);
 
    }
 
    return 0;
 
}
 
