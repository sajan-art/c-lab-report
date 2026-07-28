// wap in c++ to calculate the area of circle, rectangle, and triangle using function overloading.
#include <iostream>
using namespace std;

float area(float r);
int area(int l, int b);
float area(float b, float h, int);

int main()
{
    float r, base, height;
    int l, b;

     cout << "Enter radius: ";
    cin >> r;

    cout << "Enter length and breadth: ";
    cin >> l >> b;

    cout << "Enter base and height: ";
    cin >> base >> height;

    cout << "Area of Circle = " << area(r) << endl;
    cout << "Area of Rectangle = " << area(l, b) << endl;
    cout << "Area of Triangle = " << area(base, height, 0) << endl;
    return 0;
}
float area(float r)
{
    return (22.0/7*r*r);
}
int area (int l, int b)
{
    return (l*b);
}
float area (float b, float h,int)
{
    return (0.5*b*h);
}