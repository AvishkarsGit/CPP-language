 
/*Array of Structure variable : Write a C++ language program to create structure staff having data members
 
name,post and salary. accept data of N staff and display staff whose post is 'HOD' */
 
 
#include<iostream>
 
#include<string.h>
 
using namespace std;
 
struct Staff
 
{
 
    char staff_name[20];
 
    char staff_post[20];
 
    int staff_salary;
 
};
 
int main()
 
{
 
    struct Staff s[40];
 
    int i,N;
 
    cout<<"\nHow much staff information do you want to enter:";
 
    cin>>N;
 
    for(i=0;i<N;i++)
 
    {
 
        cout<<"\nEnter Staff Name:";
 
        cin>>s[i].staff_name;
 
        cout<<"\nEnter Staff Post:";
 
        cin>>s[i].staff_post;
 
        cout<<"\nEnter staff salary:";
 
        cin>>s[i].staff_salary;
 
    }
 
 
    cout<<"\n***********************************************************";
 
    cout<<"\n**********VJTECH College Management System*****************";
 
    cout<<"\n***********************************************************";
 
    cout<<"\nNAME\tPOST\tSALARY";
 
    cout<<"\n---------------------------";
 
    for(i=0;i<N;i++)
 
    {
 
        if(strcmp(s[i].staff_post,"HOD")==0)
 
        {
 
            cout<<"\n"<<s[i].staff_name<<"\t"<<s[i].staff_post<<"\t"<<s[i].staff_salary;
 
        }    
 
    }
 
    return 0;
 
}
 
