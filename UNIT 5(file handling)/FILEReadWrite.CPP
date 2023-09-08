#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
      clrscr();
      char ch;
      ifstream fin;
      ofstream fout;
      fin.open("abc.txt",ios::in);
      fout.open("Nagar.txt",ios::out);
      while(!fin.eof())
      {
	   fin.get(ch);
	   fout<<ch;
      }
      cout<<"\nFile copied succesfully!";
      getch();
}