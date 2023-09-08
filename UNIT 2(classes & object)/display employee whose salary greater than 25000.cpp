 
/*
 
Write a c++ program to define a class "Employee" having data members emp_id,emp_name and 
 
emp_salary. Accept and display data for employee having salary greater than 25,0000/-
 
*/
 
#include<iostream>
 
using namespace std;
 
class Employee
 
{
 
    private:
 
        int emp_id;
 
        char emp_name[20];
 
        float emp_salary;
 
    public:
 
        void get_emp_details()
 
        {
 
            cout<<"\nEnter Employee ID:";
 
            cin>>emp_id;
 
            cout<<"\nEnter Employee Name:";
 
            cin>>emp_name;
 
            cout<<"\nEnter Employee Salary:";
 
            cin>>emp_salary;
 
        }
 
        void disp_emp_details()
 
        {
 
            if(emp_salary>25000)
 
            {
 
                cout<<"\n"<<emp_id<<"\t"<<emp_name<<"\t"<<emp_salary;
 
            }
 
        }
 
};
 
int main()
 
{
 
    Employee e[5];
 
    int i;
 
    for(i=0;i<5;i++)
 
    {
 
        e[i].get_emp_details();
 
    }
 
    cout<<"\n***************************************************";
 
    cout<<"\n*********EMPLOYEE MANAGEMENT SYSTEM****************";
 
    cout<<"\n***************************************************";
 
    cout<<"\nEMPID\tNAME\tSALARY";
 
    cout<<"\n================================";
 
    for(i=0;i<5;i++)
 
    {
 
        e[i].disp_emp_details();
 
    }
 
    return 0;    
 
}
 
 
