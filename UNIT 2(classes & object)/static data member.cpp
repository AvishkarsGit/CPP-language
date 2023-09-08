 
//static data member 
 
#include<iostream>
 
using namespace std;
 
class Student
 
{
 
    private:
 
        int rollno;
 
        char name[20];
 
        static int college_code;
 
        float marks;
 
    public:
 
        void getdata()
 
        {
 
            cout<<"\nEnter Student Roll No:";
 
            cin>>rollno;
 
            cout<<"\nEnter Student Name:";
 
            cin>>name;
 
            cout<<"\nEnter Student Marks:";
 
            cin>>marks;
 
        }
 
        void putdata()
 
        {
 
            cout<<"\n"<<rollno<<"    "<<name<<"    "<<college_code<<"    "<<marks;
 
        }
 
};
 
int Student::college_code=118;
 
int main()
 
{    
 
    Student s1,s2;//s3;
 
    s1.getdata();
 
    s2.getdata();
 
   // s3.getdata();
 
    cout<<"\n**********************************************";
 
    cout<<"\n**************VJTech Engg College*************";
 
    cout<<"\n**********************************************";
 
    cout<<"\nROLLNO    NAME    CODE    MARKS";
 
    cout<<"\n======================================";
 
    s1.putdata();
 
    s2.putdata();
 
    //s3.putdata();
 
    return 0;
 
}
 
