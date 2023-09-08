 
/*
 
 
Hierarchical Inheritance student=>Test & student=>sport
 
 
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
 
class sport:public student 
 
{
 
    protected:
 
        int sport_score;
 
    public:
 
        void get_sport_score()
 
        {
 
            cout<<"\n Enter Student Sport score:";
 
            cin>>sport_score;
 
        }
 
        void disp_sport_score()
 
        {
 
           cout<<"\nsport score:"<<sport_score;    
 
        }     
 
};
 
int main()
 
{
 
    Test t1;
 
    cout<<"\n*********Impletation Of Test Class************";
 
    t1.get_stud_info();
 
    t1.get_test_marks();
 
    cout<<"\n***********Student Academic Information**********";
 
    t1.disp_stud_info();
 
    t1.disp_test_marks();
 
    
 
    sport s1;
 
    cout<<"\n***********Implementation Of Sport class************";
 
    s1.get_stud_info();
 
    s1.get_sport_score();
 
    cout<<"\n***********student Sport Information************";
 
    s1.disp_stud_info();
 
    s1.disp_sport_score();
 
    return 0;    
 
}
 
