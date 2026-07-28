// wap to find the largest element in a dynamically allocated memory
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    // dynamic memory allocation
    int *arr = new int[n];
    cout<<"enter"<<n <<"elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    int largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<"Largest element="<<largest<< endl;
    return 0;
}