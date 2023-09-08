#include<iostream>
using namespace std;
class base
{
	public:
 	int n1;
	void show()
	{
		cout<<"n1 =" <<n1;
	}
};

class derive : public base
{
	public:
	int n2;
    void show()
	{
		cout<<"n1 = "<<n1;
		cout<<"n2 ="<<n2;
	}
};
int main()
{

	base b;
	base *bptr; //base pointer
	cout<<"Pointer of base class points to it\n";
	bptr=&b; //address of base class
	bptr->n1=44; //access base class via base pointer
	bptr->show();
	derive d;
	cout<<"\n";
	bptr=&d; //address of derive class
	bptr->n1=66; //access derive class via base pointer
	bptr->show();
	return 0;
}
