#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
       char str1[10],str2[10];
       int res;
       clrscr();
       cout<<"\nEnter the first string :";
       cin>>str1;
       cout<<"\nEnter the first string :";
       cin>>str2;
       res=strcmp(str1,str2);
       if(res==0)
       {
	  cout<<"\nString is equal!!";
       }
       else
       {
	  cout<<"\nstring is not equal!!";
       }
       getch();
}