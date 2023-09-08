#include<iostream>
using namespace std;
int main(){
	
	char str[20];
	int length=0;
	cout<<"Enter string:";
	cin>>str;
	for(int i=0; str[i]!='\0'; i++)
    {
        length++; //Counting the length.
    }
    //reverse string
    cout<<"\nreverse string :";
    for(int i=length-1;i>=0;i--){
    	cout<<str[i];
	}
	return 0;
}
