#include<iostream>
#include<fstream>
using namespace std;

int emp_id;
float sal;
char name[20];

void filewrite();
void fileread();
void filesearch();

void filewrite()
{
	fstream fout;
	fout.open("file.txt",ios::app);
	char name[20];
	int emp_id,i,n;
	float sal;
	cout<<"\nHoW many Record do you wants to enter:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter Name :";
		cin>>name;
		cout<<"\nEnter ID:";
	    cin>>emp_id;
		cout<<"\nEnter salary:";
		cin>>sal;
		fout<<"\n"<<name<<"\t"<<emp_id<<"\t"<<sal;
	}
	fout.close();
}
void fileread()
{
    char ch;
    fstream fin;
    fin.open("file.txt",ios::in);
    cout<<"\nNAME\tID\tSALARY";	
	cout<<"\n==========================";
    while(!fin.eof())
    {
    	
		fin.get(ch);
		cout<<ch;
    }
	fin.close();
}
void filesearch()
{
	int id;
	fstream fin;
	fin.open("file.txt",ios::in);
	cout<<"\nEnter ID:";
	cin>>id;
    if(id==emp_id)
    {
		cout<<"\nNAME    :"<<name;
		cout<<"\nID		 :"<<emp_id;
		cout<<"\nSALARY  :"<<sal;
	}
	else
	{
		cout<<"\nNo data Entered!!";
	}
}
int main()
{
	int ch;
	while(ch!=4)
	{
		cout<<"\n***** FILE MENUS ****";
		cout<<"\n1.File Write";
		cout<<"\n2.File Read ";
		cout<<"\n3.File Search";
		cout<<"\n4.Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:filewrite();
			break;
			case 2:fileread();
			break;
			case 3:filesearch();
			break;
			case 4:cout<<"\nThanks!";
			break;
			default:cout<<"\nInvalid choice!";
		}
	}
	return 0;
}
