#include<iostream>
using namespace std;
int main()
{
  int phy,che,cpp,ds,m,total;
  float per;
  cout<<"\nEnter physics Marks:";
  cin>>phy;
  cout<<"\nEnter Chemistry Marks:";
  cin>>che;
  cout<<"\nEnter c++ lang  Marks:";
  cin>>cpp;
  cout<<"\nEnter Data structure Marks:";
  cin>>ds;
  cout<<"\nEnter Maths Marks:";
  cin>>m;
  
  total=(phy+che+cpp+m+ds);
  per=total/5;
  cout<<"\n************************";
  cout<<"\n      MSBTE RESULT      ";
  cout<<"\n************************";
  cout<<"\nPhysics         :"<<phy;
  cout<<"\nChemistry       :"<<che;
  cout<<"\nC++ lang        :"<<cpp;
  cout<<"\nData structure  :"<<ds;
  cout<<"\nMaths           :"<<m;
  cout<<"\n========================";
  cout<<"\nTOTAL           :"<<total;
  cout<<"\nPERCENTAGE      :"<<per<<"%";
  return 0;
}