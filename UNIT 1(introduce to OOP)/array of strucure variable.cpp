 
/*Array of Structure variable : Define a structure that represents Fruit with properties 
 
fruit name, fruit type, fruit color. Write a program that accepts data of four fruits 
 
and displays the results.*/
 
 
#include<iostream>
 
using namespace std;
 
struct Fruit
 
{
 
    char fruit_name[20];
 
    char fruit_type[20];
 
    char fruit_color[20];
 
};
 
int main()
 
{
 
    struct Fruit f[40];
 
    int i,N;
 
    //cout<<"Total memory allocated for Structure Variable f = "<<sizeof(f);
 
    cout<<"\nHow much fruit information do you want to enter:";
 
    cin>>N;
 
    for(i=0;i<N;i++)
 
    {
 
        cout<<"\nEnter Fruit Name:";
 
        cin>>f[i].fruit_name;
 
        cout<<"\nEnter Fruit Type:";
 
        cin>>f[i].fruit_type;
 
        cout<<"\nEnter fruit Color:";
 
        cin>>f[i].fruit_color;
 
    }
 
 
    cout<<"\n*********************************************";
 
    cout<<"\n**********Ak FRUIT STALL*****************";
 
    cout<<"\n*********************************************";
 
    cout<<"\nName  Type  Color";
 
    cout<<"\n-----------------------";
 
    for(i=0;i<N;i++)
 
    {
 
        cout<<"\n"<<f[i].fruit_name<<"  "<<f[i].fruit_type<<"  "<<f[i].fruit_color;
 
    }
 
    return 0;
 
    
 
}
 
