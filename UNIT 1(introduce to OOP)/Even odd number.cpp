//Check Even-odd number 
#include<iostream> 
using namespace std; 
int main()
{
    int no;
    cout<<"\nEnter Any Integer Number:";
    cin>>no;
    if(no%2==0)
    {
        cout<<"\nGiven number "<<no<<" is EVEN"; 
    }
    else
    {
        cout<<"\nGiven number "<<no<<" is ODD";
    }
    return 0;
}