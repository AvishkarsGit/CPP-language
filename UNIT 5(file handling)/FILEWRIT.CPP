// file write;
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
      clrscr();
      ofstream fout;
      fout.open("abc.txt",ios::out);
      fout<<"My name is avishkar";
      getch();
}
