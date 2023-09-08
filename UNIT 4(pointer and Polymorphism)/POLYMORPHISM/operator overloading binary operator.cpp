#include<iostream>
using namespace std;
class space 
{
  private:
    int a,b,c;
  public:
    void getdata(int m,int n,int p)
    {
      a=m;
      b=n;
      c=p;
    }
    void display()
    {
      cout<<"\n a="<<a<<"  b="<<b<<"  c="<<c;
    }
    space operator +(space m)
    {
      space temp;
      temp.a=a+m.a;
      temp.b=b+m.b;
      temp.c=c+m.c;
      return(temp);
    }
}; 
int main()
{
  space s1,s2,s3;
  cout<<"\nValue before binary operator:";
  s1.getdata(10,20,30);
  s2.getdata(5 ,10,15);
  s1.display();
  s2.display();
  cout<<"\nValue after (+) binary operator:";
  s3=s1+s2;
  s3.display(); 
  return 0;
}