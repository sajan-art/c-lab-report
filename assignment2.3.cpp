// wap to display numbers with fixed decimal precision using fixed and setprecision()
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   double num=123.456789;
   cout<<"Default Output"<<num<<endl;
   cout<<fixed;
   cout<<"Fixed with 2 decimal place"<<setprecision(2)<< num<<endl;
   cout<<"Fixed with 4 decimal place"<<setprecision(4)<< num<<endl;
   cout<<"Sajan Kandel\n";
   return 0;
}