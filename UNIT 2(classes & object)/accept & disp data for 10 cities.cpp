 
/*
 
Write a c++ program to define a class "City" having data members name,population. 
 
Accept and display data for 5 cities.
 
*/
 
#include<iostream>
 
using namespace std;
 
class City
 
{
 
    private:
 
        char name[20];
 
        int population;
 
    public:
 
        void get_city_details()
 
        {
 
            cout<<"\nEnter City Name:";
 
            cin>>name;
 
            cout<<"\nEnter City Population:";
 
            cin>>population;
 
        }
 
        void disp_city_details()
 
        {
 
                cout<<"\n"<<name<<"    "<<population;
 
        }
 
};
 
int main()
 
{
 
    City c[5];
 
    int i;
 
    for(i=0;i<5;i++)
 
    {
 
        c[i].get_city_details();
 
    }
 
    cout<<"\n***************************************************";
 
    cout<<"\n*************CITY MANAGEMENT SYSTEM****************";
 
    cout<<"\n***************************************************";
 
    cout<<"\nNAME    POPULATION";
 
    cout<<"\n================================";
 
    for(i=0;i<5;i++)
 
    {
 
        c[i].disp_city_details();
 
    }
 
    return 0;    
 
}
 