 
//Class & Objects - Create class Student having data member rollno,name,marks.
 
//Accept & display data for one object.
 
#include<iostream>
 
using namespace std;
 
 
class Student
 
{
 
    private:
 
        int rollno;
 
        char name[10];
 
        float marks;
 
    public:
 
        void get_stud_info()
 
        {
 
            cout<<"\nEnter Student RollNo:";
 
            cin>>rollno;
 
            cout<<"\nEnter Student Name:";
 
            cin>>name;
 
            cout<<"\nEnter Student Marks:";
 
            cin>>marks;
 
        }
 
        void disp_stud_info()
 
        {
 
            cout<<"\n***********STUDENT INFORMATION*************";
 
            cout<<"\nRoll NO:"<<rollno;
 
            cout<<"\nName   :"<<name;
 
            cout<<"\nMarks  :"<<marks;
 
        }
 
};
 
 
int main()
 
{
 
    Student s1;
 
    s1.get_stud_info();
 
    s1.disp_stud_info();    
 
    return 0;
 
}
 
