#include<iostream>
using namespace std;
int main()
{
  char str1[20],str2[20],*p1,*p2;
  int len1=0,len2=0,flag=0;
  p1=&str1[0];
  p2=&str2[0];
  cout<<"\nEnter first string:";
  cin>>str1;
  cout<<"\nEnter second string:";
  cin>>str2;
  while(*p1!='\0')
  {
    len1++;
    p1++;
  }
  while(*p2!='\0')
  {
    len2++;
    p2++;
  }
  if(len1==len2)
  {
    p1=&str1[0];
    p2=&str2[0];
    while(*p1!='\0')
    {
      if(*p1!=*p2)
      {
        flag=1;
        break;
      }
      p1++;
      p2++;
    }
    if(flag==0)
    {
      cout<<"\nString is equal";
    }
    else
    {
      cout<<"\nString is not equal!!";
    }
  }
  else
  {
    cout<<"\nString is not equal";
    cout<<"\n-------------------";
    cout<<"\nBecause length of string '"<<str1<<"' is "<<len1;
    cout<<"\nAnd length of string '"<<str2<<"' is "<<len2;
  }
  return 0;
}
