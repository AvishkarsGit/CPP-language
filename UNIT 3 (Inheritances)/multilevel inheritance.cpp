 
/*
 
 
Multilevel Inheritance student=>Test=>Result
 
 
*/
 
#include<iostream>
 
using namespace std;
 
class student 
 
{
 
    protected:
 
        int rollno;
 
        char name[20];
 
    public:
 
        void get_stud_info()
 
        {
 
            cout<<"\n Enter Student Roll No:";
 
            cin>>rollno;
 
            cout<<"\n Enter student Name:";
 
            cin>>name;
 
            
 
        }
 
        void disp_stud_info()
 
        {
 
            cout<<"\nRoll No:"<<rollno;
 
            cout<<"\nName:"<<name;
 
        }
 
};
 
class Test:public student
 
{
 
    protected:
 
        int marks1,marks2;
 
    public:
 
        void get_test_marks()
 
        {
 
            cout<<"\n Enter class Test-1 Marks:";
 
            cin>>marks1;
 
            cout<<"\n Enter Class Test-2 Marks:";
 
            cin>>marks2;
 
        }
 
        void disp_test_marks()
 
        {
 
            cout<<"\nClass Test-1 Marks:"<<marks1;
 
            cout<<"\nClass Test-2 Marks:"<<marks2;
 
        }
 
};
 
class Result:public Test
 
{
 
    protected:
 
        int total_score;
 
    public:
 
        void calc_score()
 
        {
 
            total_score=marks1+marks2;
 
        }
 
        void disp_score()
 
        {
 
           cout<<"\nTotal Marks:"<<total_score;    
 
        }     
 
};
 
int main()
 
{
 
    Result r1;
 
    r1.get_stud_info();
 
    r1.get_test_marks();
 
    r1.calc_score();
 
    cout<<"\n***************** STUDENT INFROMATION ******************";
 
    r1.disp_stud_info();
 
    r1.disp_test_marks();
 
    r1.disp_score();
 
    return 0;
 
    
 
}
 
