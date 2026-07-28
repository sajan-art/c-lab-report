// wap that uses oveloaded member function for converting temperature from celcius scale to kelvin scale
#include<iostream>
using namespace std;
float temperature (float c);
int main()
{
    float c;
    cout<<"enter temperature in celcius"<<endl;
    cin>>c;
    cout<<"Temperature in Kelvin is"<< temperature(c)<<endl;;
    return 0;
}
float temperature (float c)
{
    return (273.15+c);
}
