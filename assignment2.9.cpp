#include<iostream>
using namespace std;
void swapNumber (int &a,int&b)
{
    int temp =a;
    a=b;
    b=temp;
}
int main()
{
    int x=10,y=20;
    cout<<"Before swapping"<< endl;
    cout<<"x="<<x<<"y="<<y<<endl;
    swapNumber(x,y);
    cout<<"After swapping"<< endl;
    cout<<"x="<<x<<"y="<<y<<endl;
    cout<<"Sajan Kandel"<<endl;
    return 0;
}