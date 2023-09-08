#include<iostream>
#include<fstream>
using namespace std;
int main()
{
      char ch;
	  fstream fin;
      fin.open("data.txt",ios::in);
      while(!fin.eof())
      {
	   fin.get(ch);
	   cout<<ch;
      }
      return 0;
}
