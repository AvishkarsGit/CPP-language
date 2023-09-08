#include <iostream>  
#include <string>  
using namespace std;  
int main()  
{  
    cout<<is_array<int>::value; // case A  
    cout<<is_array<char[10]>::value; // case B  
    cout<<is_array<string>::value;  // case c  
    return 0;  
}  
