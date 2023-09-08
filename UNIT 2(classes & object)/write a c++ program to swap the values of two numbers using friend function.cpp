//write a c++ program to swap the values of two numbers using friend function
#include<iostream>
using namespace std;
class friendemo
{
	private:
		int a,b;
	public:
		void getdata()
		{
			cout<<"\nEnter Value of \n\ta=";
			cin>>a;
			cout<<"\n\tb=";
			cin>>b;
			cout<<"\nBefore swapping Value of a & b:";
			cout<<"\nA="<<a<<"\tB="<<b;
		}
		friend void putdata(friendemo s)
		{
			int temp;
			temp=s.a;
			s.a=s.b;
			s.b=temp;
			cout<<"\nAfter swapping Value of a & b:";
			cout<<"\nA="<<s.a<<"\tB="<<s.b;
		}
};
int main()
{
	friendemo f1;
	f1.getdata();
 	putdata(f1);
	return 0;
}
