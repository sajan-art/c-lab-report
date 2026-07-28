// 	Write a program to demonstrate the concept of passing objects as function parameters and returning objects.
#include <iostream>
using namespace std;
class Number
{
    int num;
public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> num;
    }
    void display()
    {
        cout << "Number = " << num << endl;
    }
    // Function accepting object as parameter
    Number add(Number n)
    {
        Number temp;
        temp.num = num + n.num;
        return temp;      // Returning object
    }
};
int main()
{
    Number n1, n2, result;
    cout << "Enter first object:" << endl;
    n1.getData();
    cout << "Enter second object:" << endl;
    n2.getData();
    result = n1.add(n2);
    cout << "Sum of two objects:" << endl;
    result.display();
    return 0;
}