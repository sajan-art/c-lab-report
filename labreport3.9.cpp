#include <iostream>
using namespace std;
class Student
{
private:
    int rollNo;
    static int count;   
public:
    Student()
    {
        count++;   
    }
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
    }
    static void showCount()
    {
        cout << "Total Number of Objects Created = " << count << endl;
    }
};
int Student::count = 0;
int main()
{
    Student s1, s2, s3;
    s1.input();
    s2.input();
    s3.input();
    cout << "\nStudent Details:" << endl;
    s1.display();
    s2.display();
    s3.display();
    Student::showCount();
    return 0;
}