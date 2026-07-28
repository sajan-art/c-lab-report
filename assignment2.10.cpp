#include<iostream>
using namespace std;
void swapNumbers(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=10,y=20;
    cout<<"After swapping:="<<endl;
    cout<<"X=" <<x<<"Y="<<y<<endl;
    swapNumbers(&x,&y);
     cout<<"After swapping:="<<endl;
    cout<<"X=" <<x<<"Y="<<y<<endl;
    cout<<"Sajan Kandel\n";
    return 0;
}