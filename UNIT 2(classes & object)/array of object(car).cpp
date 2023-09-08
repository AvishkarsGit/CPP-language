 
//ay of objects
 
#include<iostream>
 
using namespace std;
 
class Car
 
{
 
    private:
 
        int car_no;
 
        char car_name[20];
 
        char company_name[20];
 
        float car_price;
 
    public:
 
        void getCarDetails()
 
        {
 
            cout<<"\nEnter Car Number:";
 
            cin>>car_no;
 
            cout<<"\nEnter Car Name:";
 
            cin>>car_name;
 
            cout<<"\nEnter Car Company Name:";
 
            cin>>company_name;
 
            cout<<"\nEnter Car Price:";
 
            cin>>car_price;
 
        }
 
        void dispCarDetails()
 
        {
 
            cout<<"\n"<<car_no<<"\t"<<car_name<<"\t"<<company_name<<"\t"<<car_price;
 
        }
 
};
 
int main()
 
{
 
    Car c[5];
 
    int i;
 
    for(i=0;i<2;i++)
 
    {
 
        c[i].getCarDetails();
 
    }
 
    cout<<"\n************************************";
 
    cout<<"\n********VJTech Car ShowRoom*********";
 
    cout<<"\n************************************";
 
    cout<<"\nCAR NO\tCAR NAME\tCOMP_NAME\tPRICE";
 
    cout<<"\n===========================================";
 
    for(i=0;i<2;i++)
 
    {
 
        c[i].dispCarDetails();
 
    }    
 
    return 0;
 
}
 
 
