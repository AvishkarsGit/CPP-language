 
//Static member function
 
#include<iostream>
 
using namespace std;
 
class Item
 
{
 
    private:
 
        int no;
 
        static int count;
 
    public:
 
        void getdata(int x)
 
        {
 
            no=x;
 
            count++;    
 
        }
 
        static void putdata()
 
        {
 
            cout<<"\nValue of count="<<count;    
 
        }
 
};
 
int Item::count;
 
 
int main()
 
{
 
    Item x1,y1,z1;
 
    
 
    x1.getdata(100);
 
    y1.getdata(200);
 
    z1.getdata(300);
 
    
 
    Item::putdata();
 
 
 
    return 0;
 
}
 
