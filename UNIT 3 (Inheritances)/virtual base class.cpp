/*
	Virtual Base class : Student => Test,Sports =>Result
*/
#include<iostream>
using namespace std;
class Student
{
	protected:
		int rollno;
		char name[20];
	public:
		void get_stud_info()
		{
			cout<<"\nEnter Student Roll No:";
			cin>>rollno;
			cout<<"\nEnter Student Name:";
			cin>>name;
		}
		void disp_stud_info()
		{
			cout<<"\nRoll No:"<<rollno;
			cout<<"\nName:"<<name;
		}
};
class Test:virtual public Student
{
	protected:
		int marks1,marks2;
	public:
		void get_test_marks()
		{
			cout<<"\nEnter Class Test-1 Marks:";
			cin>>marks1;
			cout<<"\nEnter Class Test-2 Marks:";
			cin>>marks2;
		}	
		void disp_test_marks()
		{
			cout<<"\nClass Test-1 Marks:"<<marks1;
			cout<<"\nClass Test-2 Marks:"<<marks2;
		}
};
class Sports:public virtual Student
{
	protected:
		int sport_score;
	public:
		void get_sport_score()
		{
			cout<<"\nEnter Student Sport Score:";
			cin>>sport_score;
		}	
		void disp_sport_score()
		{
			cout<<"\nSport Score:"<<sport_score;
		}
};
class Result:public Test,public Sports
{
	protected:
		int total_score;
	public:
		void calc_total_score()
		{
			total_score=marks1+marks2;	
		}	
		void disp_total_score()
		{
			cout<<"\nTotal Marks:"<<total_score;
		}
};
int main()
{
	Result r1;
	r1.get_stud_info();
	r1.get_test_marks();
	r1.get_sport_score();
	r1.calc_total_score();
	cout<<"\n*****STUDENT INFORMATION SYSTEM*******";
	r1.disp_stud_info();
	r1.disp_test_marks();
	r1.disp_total_score();
	r1.disp_sport_score();
	return 0;
}