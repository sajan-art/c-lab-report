#include<iostream>
using namespace std;
int main()
{
    int n,i,f=1;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"Factorial is"<<f;
    cout<<"\n Sajan Kandel\n";
    return 0;
}