 
//Static data member
 
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
 
        void putdata()
 
        {
 
            cout<<"\nValue of no="<<no;
 
            cout<<"\nValue of count="<<count;    
 
        }
 
};
 
int Item::count;
 
int main()
 
{
 
    Item x1,y1,z1;
 
    cout<<"\nSize of x1="<<sizeof(x1);
 
    x1.getdata(100);
 
    y1.getdata(200);
 
    z1.getdata(300);
 
    
 
    x1.putdata();
 
    y1.putdata();
 
    z1.putdata();
 
    
 
    
 
    return 0;
 
}
 
