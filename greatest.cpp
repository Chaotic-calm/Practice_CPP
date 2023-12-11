#include <iostream>
using namespace std;
class Max
{
    private:
        int a,b,c,l;
    public:
        void read()
        {
            cout<<"enter three number"<<endl;
            cin >> a >> b >> c;
        }
        int large();
        void display()
        {
            l = large();
            cout << "greatest=" << l <<endl;
        }
};
int Max :: large()
{
    l = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    return l;
}
int main()
{
    Max x;
    x.read();
    x.display();
    return 0;
}
