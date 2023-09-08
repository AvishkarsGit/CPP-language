 
/*
 
Write a c++ program which will print(half pyramid) pattern of star2:
 
1
 
2 2
 
3 3 3 
 
4 4 4 4 
 
5 5 5 5 5
 
 
*/
 
#include<iostream>
 
using namespace std;
 
int main()
 
{
 
    int i,j;
 
    cout<<"\n*******Print(half pyramid) pattern of star2*******\n";
 
    for(i=1;i<=5;i++)
 
    {     
 
        for(j=1;j<=i;j++)
 
        {      
 
            cout<<i<<" ";    
 
        }
 
        cout<<"\n";
 
    }
 
    return 0;
 
}
 
