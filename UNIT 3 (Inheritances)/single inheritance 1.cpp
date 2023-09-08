 
/* 
 
 
write a c++ program Which create class student Having Data Member rollno,name,
 
create class having data Member m1,m2,m3,total,& Percentage Accept & Display
 
Data For One Object 
 
 
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
 
            cout<<"\nRoll No: "<<rollno;
 
            cout<<"\nName: "<<name;
 
        }
 
};
 
class Marks:public student
 
{
 
    protected:
 
        int m1,m2,m3,total;
 
        float percentage;
 
    public:
 
      void get_Marks_details()
 
      {
 
          cout<<"\n Enter Marks-1:";
 
          cin>>m1;
 
          cout<<"\n Enter Marks-2:";
 
          cin>>m2;
 
          cout<<"\n Enter Marks-3:";
 
          cin>>m3;
 
      }
 
      void disp_Marks_details()
 
      {
 
           total=(m1+m2+m3);
 
           percentage=(float)total/3;
 
           cout<<"\nTotal Studnt Marks:"<<total;
 
           cout<<"\nPercentage Marks:"<<percentage;
 
      }
 
};
 
int main()
 
{
 
     Marks s1;
 
     s1.get_stud_info();
 
     s1.get_Marks_details();
 
     s1.disp_stud_info();
 
     s1.disp_Marks_details();
 
     return 0;    
 
}
 
