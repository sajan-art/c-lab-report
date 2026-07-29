//Write a C++ program to demonstrate dynamic memory allocation for objects. Create an object of a class dynamically using the new operator, access its members using a pointer, and release memory using the delete operator.
#include<iostream>
using namespace std;
class Student
{
    private:
    int rollNo;
    string name;
    public:
    void input()
    {
        cout<<"enter roll number:";
        cin>>rollNo;
        cout<<"enter Name: ";
        cin>>name;
    }
    void display()
    {
        cout<<"\n Student Details"<<endl;
        cout<<"Roll Number:"<<rollNo<<endl;
        cout<<"Name :"<<name<<endl;
    }
};
int main()
{
    Student *ptr = new Student;
    ptr-> input();
    ptr-> display();
    delete ptr;
    return 0;
}
