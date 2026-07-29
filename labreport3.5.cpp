// wap in c++ to demonstrate the use of constructor and deconstructor. Create a class student that displayes the message when an object is created using a constructor and when it is destroyed using a deconstructor.
#include<iostream>
using namespace std;
class student{
    public:
    student()
    {
        cout<<"Object created successfully"<<endl;
    }
    ~student()
    {
        cout<<"object destriyed successfully"<<endl;
    }
};
int main()
{
    student s1;
    cout<<"inside main function"<<endl;
    return 0;
}