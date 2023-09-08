 
/*
 
Write a C++ program to declare a class "staff" having data members name,basic salary,
 
DA,HRA and calculate gross salary. Accept and display data for one staff.
 
Where:
 
        DA=74.5% of basic salary
 
        HRA=30% of basic salary
 
        gross_salary=basic+HRA+DA
 
*/
 
#include<iostream>
 
using namespace std;
 
class Staff
 
{
 
    private:
 
        char staff_name[20];
 
        int basic_salary;
 
        float DA;
 
        float HRA;
 
        float gross_salary;
 
    public:
 
        void get_staff_info()
 
        {
 
            cout<<"\nEnter Staff Name:";
 
            cin>>staff_name;
 
            cout<<"\nEnter Staff Basic Salary:";
 
            cin>>basic_salary;
 
        }
 
        void calc_gross_salary()
 
        {
 
            DA=(basic_salary*74.5)/100;
 
            HRA=(basic_salary*30)/100;
 
            gross_salary=(basic_salary+DA+HRA);
 
        }
 
        void disp_staff_info()
 
        {
 
            cout<<"\n**********************************************";
 
            cout<<"\n********STAFF MANAGEMENT SYSTEM***************";
 
            cout<<"\n**********************************************";
 
            cout<<"\nStaff Name          :"<<staff_name;
 
            cout<<"\nBasic Salary        :"<<basic_salary;
 
            cout<<"\nDay Allowance       :"<<DA;
 
            cout<<"\nHouse Rent Allowance:"<<HRA;
 
            cout<<"\n===============================================";
 
            cout<<"\nTotal Gross Salary  :"<<gross_salary;
 
        }
 
};
 
int main()
 
{
 
    Staff s1;
 
    s1.get_staff_info();
 
    s1.calc_gross_salary();
 
    s1.disp_staff_info();
 
    return 0;
 
}
 
 
