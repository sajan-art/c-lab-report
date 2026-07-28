/* WAP to overload a function calculate() for different shapes:
Create a class Shape and overload a function calculate() to find:
Square area → calculate(side)
Rectangle area → calculate(length, breadth)
Triangle area → calculate(base, height, 0)
(use third parameter only to differentiate function) */
#include<iostream>
using namespace std;
class Shape
{
public:
// for square
void area (float l)
{
    cout<<"area of square ="<<l*l<<endl;
}
// for rectangle
void area (float l,float b)
{
    cout<<"area of rectangle ="<< l*b<<endl;
}
// for triangle area
void area (float b,float h,int)
{
    cout<<"area of triangle="<<0.5*b*h<<endl;
}
};
int main()
{
    Shape sajan;
    sajan.area(10);
    sajan.area(11,12);
    sajan.area(12,13,0);
    return 0;
}

