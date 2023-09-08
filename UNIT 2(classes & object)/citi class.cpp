 
//Write a program to declare class ‘city’ with data member’s cityname and state. 
 
 
#include<iostream>
 
using namespace std;
 
class City
 
{
 
    private:
 
        char city_name[20];
 
        char state_name[20];
 
    public:
 
        void get_city_info()
 
        {
 
            cout<<"\nEnter City Name:";
 
            cin>>city_name;
 
            cout<<"\nEnter State Name:";
 
            cin>>state_name;
 
        }
 
        void disp_city_info()
 
        {
            cout<<"\n"<<city_name<<"    "<<state_name;
 
        }
 
};
 
int main()
 
{
 
    City c1,c2,c3;
 
    c1.get_city_info();
 
    c2.get_city_info();
    c3.get_city_info();
 
    cout<<"\nCITY    STATE";
 
    cout<<"\n=================";
 
    c1.disp_city_info();
 
    c2.disp_city_info();
    c3.disp_city_info();
 
    return 0;
 
}
 
