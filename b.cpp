// program on for loop
#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"enter value of n"<< endl;
    cin>>n;
do
    {
        cout<<i<<"\t";
        i++;
    }
    while(i<=n);
    return 0;
}