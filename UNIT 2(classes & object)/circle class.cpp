#include <iostream>
using namespace std;
class circle
{
  private :
    int r;
    float area;
  public:
    void getdata()
    {
      r=2;
      area=2*(3.14)*r;
    }
    void putdata()
    {
      cout<<"\nArea of circle:"<<area;
    }
};
int main()
{
    circle c1;
    c1.getdata();
    c1.putdata();
    return 0;
}