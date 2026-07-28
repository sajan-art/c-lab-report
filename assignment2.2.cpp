// wap in c++ to demonstrate implict and explict type casting.
#include <iostream>
using namespace std;
int main()
{
    // implict type casting
    int num1 = 10;
    double result1;
    result1 = num1; 
    cout << "Implicit Type Casting:" << endl;
    cout << "num " << num1 << endl;
    cout << "result" << result1 << endl;
    // explict type casting
    double num2 = 15.75;
    int result2;
    result2 = (int)num2; 
    cout << "\nExplicit Type Casting:" << endl;
    cout << "Double value: " << num2 << endl;
    cout << "Converted to int: " << result2 << endl;
    cout<<"\n Sajan Kandel"<< endl;
    return 0;
}