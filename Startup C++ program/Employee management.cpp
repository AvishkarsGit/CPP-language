#include<iostream>
using namespace std;
int main()
{
  int basic_salary;
  float HRA,TA,DA,SA,Gross_salary;
  
  cout<<"\nEnter your Basic Salary:";
  cin>>basic_salary;
  
  HRA=(basic_salary*10)/100;
  TA=(basic_salary*5)/100;
  DA=(basic_salary*15)/100;
  SA=(basic_salary*8)/100;
  
  Gross_salary=(basic_salary+HRA+DA+SA+TA);
  cout<<"\n************************";
  cout<<"\n  AK SOFTWARE PVT LTD   ";
  cout<<"\n************************";
  cout<<"\nEmployee ID  :1010";
  cout<<"\nName         :AVISHKAR";
  cout<<"\nBasic Salary :"<<basic_salary;
  cout<<"\nHRA          :"<<HRA;
  cout<<"\nDA           :"<<DA;
  cout<<"\nTA           :"<<TA;
  cout<<"\nSA           :"<<SA;
  cout<<"\n========================";
  cout<<"\nGROSS SALARY :"<<Gross_salary;
  return 0;
}