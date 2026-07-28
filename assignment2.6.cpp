// wap to overload a function area() for circle rectangle and triangle
#include<iostream>
using namespace std; 
class Area
{
    public:
    void area (float r)
    {
        cout<<"Area of circle = "<<3.14*r*r<<endl;
    }
    void area (float l,float b)
    {
        cout<<"Area of Rectangle="<<l*b <<endl;
    }
    void area (int b,float h)
    { 
        cout<<"area of triangle =" << 0.5*b*h<<endl;
        cout<<"Sajan Kandel \n";
    }
    };
    int main()
    {
        Area obj;
        obj.area(5);
        obj.area(10,4);
        obj.area(8,6);
    return 0;
    }
