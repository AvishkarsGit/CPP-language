#include<iostream>
using namespace std;
int main()
{
	int num,fno,sno,tno,i;
	cout<<"\nEnter Number :";
	cin>>num;
	fno=0;
	sno=1;
	cout<<"\nFibbonancci series :"<<fno<<" "<<sno;
	for(i=3;i<=num;i++)
	{
		fno=sno;
		sno=tno;
		cout<<" "<<tno;
		tno=fno+sno;
	}
	return 0;
}
