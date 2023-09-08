#include<iostream>
using namespace std;
int main()
{
	int num,i,count=0;
	cout<<"\nEnter any Number:";
	cin>>num;
	while(num!=0){
		num /= 10; //num =num/10
		count++;
	}
	cout<<"Length of Number:"<<count;
	return 0;
}
