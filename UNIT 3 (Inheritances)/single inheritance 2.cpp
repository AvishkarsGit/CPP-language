 
/*
 
 
Single inheritance :student=>Test
 
 
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
 
            cout<<"\n Enter Student Name:";
 
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
 
int main()
 
{
 
    Test t1;
 
    t1.get_stud_info();
 
    t1.get_test_marks();
 
    cout<<"\n***********STUDENT INFORMATION**********************";
 
    t1.disp_stud_info();
 
    t1.disp_test_marks();
 
    return 0;
 
    
 
}
 
