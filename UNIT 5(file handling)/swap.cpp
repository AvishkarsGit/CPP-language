#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"\nEnter valude of a :";
	cin>>a;
	cout<<"\nEnter value of  b :";
	cin>>b;
	cout<<"\nBefore Swapping \n\tA="<<a<<"\n\tB="<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nAfter Swapping \n\tA="<<a<<"\n\tB="<<b;
	return 0;
}
