// 
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