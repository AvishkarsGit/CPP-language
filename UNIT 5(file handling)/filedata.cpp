#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fout;
	fout.open("data.txt",ios::app);
	char name[20];
	int emp_id;
	float sal;
	cout<<"\nEnter Name:";
	cin>>name;
	cout<<"\nEnter ID:";
	cin>>emp_id;
	cout<<"\nEnter salary:";
	cin>>sal;
	fout<<"\nNAME\tID\tSALARY";	
	fout<<"\n==========================";
	fout<<"\n"<<name<<"\t"<<emp_id<<"\t"<<sal;
	fout.close();
	return 0;
}
