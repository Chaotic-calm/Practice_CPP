#include <iostream>
#include <math.h>
using namespace std;
class rectangle
{
    int length ;
    int breadth;
    public:
    int getarea(int l, int b)
    {
        int area;
        area = l*b;
        cout<<"AREA="<<area<<"\n";
    }
    int getperimeter(int l, int b)
    {
        int peri;
        peri =2*(l+b);
        cout<<"PERIMETER="<<peri<<"\n";
    }
};

int main()
{
    int l,b;
    rectangle r;
    cout<<"enter length=";
    cin>>l;
    cout<<"enter breadth=";
    cin>>b;
    r.getarea(l,b);
    r.getperimeter(l,b);
    return 0;
}
