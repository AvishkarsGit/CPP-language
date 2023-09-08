#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fout;
	fout.open("Avishkar.txt",ios::out);
	fout<<"\nIm Avishkar Kumbhar ";
	fout.close();
	return 0;
}
