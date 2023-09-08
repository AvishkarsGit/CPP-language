/*
	How to invole Base class constructor
*/
#include<iostream>
using namespace std;
class Alpha
{
	protected:
		int x;
	public:
		Alpha(int i)
		{
			x=i;
		}
		void show_X()
		{
			cout<<"\nAlpha Class:Value of X="<<x;
		}
};
class Beta
{
	protected:
		int y;
	public:
		Beta(int j)
		{
			y=j;
		}
		void show_Y()
		{
			cout<<"\nBeta Class:Value of Y="<<y;
		}
};
class Gamma:public Alpha,public Beta
{
	protected:
		int z;
	public:
		Gamma(int p,int q,int r):Alpha(p),Beta(q)
		{
			z=r;
		}
		void show_Z()
		{
			cout<<"\nGamma Class:Value of Z="<<z;
		}
};
int main()
{
	Gamma g1(100,200,300);
	g1.show_X();
	g1.show_Y();
	g1.show_Z();
	return 0;
	
}
