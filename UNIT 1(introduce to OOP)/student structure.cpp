 
//Structure concept in C++
 
#include<iostream>
 
using namespace std;
 
 
struct Student
 
{
 
    int rollno;
 
    char name[10];
 
    float marks;
 
}s1,s2,s3;
 
 
int main()
 
{
 
    cout<<"Enter Student Roll No:";
 
    cin>>s1.rollno;
 
    cout<<"\nEnter Student Name:";
 
    cin>>s1.name;
 
    cout<<"\nEnter Student Marks:";
 
    cin>>s1.marks;
    
 
 	cout<<"Enter Student Roll No:";
 
    cin>>s2.rollno;
 
    cout<<"\nEnter Student Name:";
 
    cin>>s2.name;
 
    cout<<"\nEnter Student Marks:";
 
    cin>>s2.marks;
    
    
    cout<<"Enter Student Roll No:";
 
    cin>>s3.rollno;
 
    cout<<"\nEnter Student Name:";
 
    cin>>s3.name;
 
    cout<<"\nEnter Student Marks:";
 
    cin>>s3.marks;
    
 
    cout<<"\n****************************************";
 
    cout<<"\n*******VJTech Engineering College*******";
 
    cout<<"\n****************************************";
 
    cout<<"\nRollNo\tName\tMarks";
 
    cout<<"\n----------------------------";
 
    cout<<"\n"<<s1.rollno<<"\t"<<s1.name<<"\t"<<s1.marks;
 	cout<<"\n"<<s2.rollno<<"\t"<<s2.name<<"\t"<<s2.marks;
 	cout<<"\n"<<s3.rollno<<"\t"<<s3.name<<"\t"<<s3.marks;
 	
    return 0;
 
}
 
