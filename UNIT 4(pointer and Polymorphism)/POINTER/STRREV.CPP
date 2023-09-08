#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
       char str[10];
       clrscr();
       cout<<"\nEnter the string :";
       cin>>str;
       strrev(str);
       cout<<"\nReverse string is "<<str;
       getch();
}