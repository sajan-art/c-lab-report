// wap to overload a function volume() for cube cuboid and cylinder
#include<iostream>
using namespace std; 
class Volume
{
    public:
    // for cume volume = l*l*l
    void volume (float l)
    {
        cout<<"Volume of cube = "<<l*l*l<<endl;
    }
    // for cuboid v= lxbxw
    void volume (float l,float b,float w)
    {
        cout<<"Volume of cuboid="<<l*b*w <<endl;
    }
    // for cylinder v=pi x r sqr h
    void volume (float r,float h)
    { 
        cout<<"Volume of cylinder =" << 3.14*r*r*h<<endl;
        cout<<"Sajan Kandel \n";
    }
    };
    int main()
    {
        Volume obj;
        obj.volume(5);
        obj.volume(10,4,11);
        obj.volume(8,6);
    return 0;
    }
