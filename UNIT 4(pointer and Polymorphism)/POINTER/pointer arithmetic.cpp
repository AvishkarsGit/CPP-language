#include <iostream>
using namespace std;
int main()
{
   int a,b;
   int *p1,*p2;
   p1=&a;
   p2=&b;
   cout<<"\nEnter value of a & b:";
   cin>>a>>b;
   cout<<"\nA="<<a<<"  B="<<b;
   cout<<"\n\n***** POINTER ARITHMETIC *****";
   cout<<"\nAddition              ="<<*p1+*p2;
   cout<<"\nSubstraction          ="<<*p2-*p1;
   a++;
   cout<<"\nValue after increment ="<<*p1;
   b--;
   cout<<"\nValue after decrement ="<<*p2;
   return 0;
}