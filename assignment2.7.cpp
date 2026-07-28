//
#include<iostream>
using namespace std;
class Display
{
    public:
    void show()
    {
        cout<<"No argument function"<<endl;
    }
    void show (int x)
    {
        cout<<"integer value= "<<x<<endl;
    }
    void show (double y)
    {
        cout<<"Double Value= "<<y<<endl;
        cout<<"Sajan Kandel\n";
    }
};
int main()
{
    Display d;
    d.show();
    d.show(10);
    d.show(12.5);
    return 0;
}