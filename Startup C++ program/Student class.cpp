#include<iostream>
using namespace std;
class Student
{
	private:
		int rollNo;
		char name[20];
		int marks;
	public:
		void get_Stud_info()
		{
			cout<<"\nEnter Student ROllNO:";
			cin>>rollNo;
			cout<<"\nEnter Student Name:";
			cin>>name;
			cout<<"\nEnter Student Marks:";
			cin>>marks;
		}
		void display()
		{
			cout<<"\n******** STUDENT INFO **********";
			cout<<"\nNAME	:"<<name;
			cout<<"\nROLLNo	:"<<rollNo;
			cout<<"\nMARKS	:"<<marks;
		}
};
int main()
{
	Student s1;
	s1.get_Stud_info();
	s1.display();
	return 0;
}
