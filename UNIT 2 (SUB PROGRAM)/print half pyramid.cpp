 
/*
 
Write a c++ program which will print(half pyramid) pattern of natural numbers:
 
1
 
2    3
 
4    5    6
 
7    8    9    10
 
11    12    13    14    15
 
 
*/
 
#include<iostream>
 
using namespace std;
 
int main()
 
{
 
    int i,j,k=1;
 
    cout<<"\n*******Print(half pyramid) pattern of natural numbers*******\n";
 
    for(i=1;i<=5;i++)
 
    {     
 
        for(j=1;j<=i;j++)
 
        {      
 
            cout<<k<<"  ";    
 
            k++;
 
        }
 
        cout<<"\n";
 
    }
 
    return 0;
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
