#include<iostream>
using namespace std;
class Student{
    public:
    int x,y;
    Student()// default constructor
    {
    }
    Student(int a,int b)//parameterized constructor
    {
        x=a;
        y=b;
        cout<<"Value of x="<<x<<"and y="<<y<<endl;
    }
    Student(float c, int d,float e)//parameterized constructor
    {
        cout<<"c="<<c<<"d="<<d<<"e="<<e<<endl;
    }
};
int main()
{
    Student obj;
    Student obj1(10,20);
    Student obj2(2.9999,5,6.9876);
    return 0;
}