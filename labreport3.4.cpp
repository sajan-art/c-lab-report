// wap in c++ to create a class Box with data members length, breadth and height. Use a parameterized constructor to initialize the object values and calculate the voulme of the box.
#include <iostream>
using namespace std;
class Box
{
    float length;
    float breadth;
    float height;
public:
    // Parameterized Constructor
    Box(float l, float b, float h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    void volume()
    {
        cout << "Volume of Box = "
             << length * breadth * height;
    }
};
int main()
{
    Box b1(10, 5, 4);
    b1.volume();
    return 0;
}