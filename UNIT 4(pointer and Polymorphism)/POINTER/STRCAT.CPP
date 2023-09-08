#include<iostream>
#include<string.h>
using namespace std;
int main()
{
       char str1[10],str2[10];
      // int res;
       cout<<"\nEnter the first string :";
       cin>>str1;
       cout<<"\nEnter the secont string :";
       cin>>str2;
       cout<<"\nConcatianted string is "<<strcat(str1,str2);
       return 0;
}
