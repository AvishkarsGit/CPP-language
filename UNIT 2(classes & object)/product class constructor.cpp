 
/*
 
Write a c++ program to define class "product" having data members prod_id,prod_name,prod_price.
 
Accept and display data for 3 products using constructor overloading.
 
*/
 
#include<iostream>
 
#include<string.h>
 
using namespace std;
 
class product
 
{
 
    private:
 
        int prod_id;
 
        char prod_name[20];
 
        float prod_price;
 
    public:
 
        product() //default constructor
 
        {
 
            prod_id=1010;
 
            strcpy(prod_name,"pencil");
 
            prod_price=550.50;
 
        }
 
        product(int id) //parameterized constructor
 
        {
 
            prod_id=id;
 
            strcpy(prod_name,"Mobile");
 
            prod_price=25000;    
 
        }
 
        product(int id,char name[20],float price)
 
        {
 
            prod_id=id;
 
            strcpy(prod_name,name);
 
            prod_price=price;
 
        }
 
        void display_product_details()
 
        {
 
            cout<<"\n"<<prod_id<<"\t"<<prod_name<<"\t"<<prod_price;
 
        }
 
};
 
int main()
 
{
 
    product p1;
 
    product p2(2020);
 
    product p3(3030,"Pen",50);
 
    cout<<"\n*************************************************";
 
    cout<<"\n***********VJTECH EDUCATION STORE****************";
 
    cout<<"\n*************************************************";
 
    cout<<"\nP_ID\tP_NAME\tP_PRICE";
 
    cout<<"\n==============================";
 
    p1.display_product_details();
 
    p2.display_product_details();
 
    p3.display_product_details();

    return 0;
 
}
 
