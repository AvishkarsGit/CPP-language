 
/*
 
Write a c++ program which will print(half pyramid) pattern of star4:
 
    *
 
   * *
 
  * * *
 
 * * * *
 
* * * * *
 
 
*/
 
#include<iostream>
 
using namespace std;
 
int main()
 
{
 
    int i,j,k;
 
    cout<<"\n*******Print(half pyramid) pattern of star*******\n";
 
    for(i=1;i<=5;i++)
 
    {     
 
        for(k=4;k>=i;k--)
 
        {
 
            cout<<" ";
 
        }
 
        for(j=1;j<=i;j++)
 
        {      
 
            cout<<"*"<<" ";    
 
        }
 
        cout<<"\n";
 
    }
 
    return 0;
 
}
 
