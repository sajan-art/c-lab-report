//Write a C++ program to pass objects as function arguments. Create a class Distance containing feet and inches, and write a function that adds two distance objects and displays the total distance.
#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    int inches;
    public:
    void input()
    {
        cout<<"enter feet and inches";
        cin>>feet>>inches;
    }
    void display()
    {
        cout<<feet<<"feet"<<inches<<"inches"<<endl;
    }
    friend Distance addDistance(Distance d1, Distance d2);
};
Distance addDistance(Distance d1, Distance d2)
{
    Distance temp;
    temp.feet=d1.feet+d2.feet;
    temp.inches=d1.inches+d2.inches;
    if(temp.inches>=12)
    {
        temp.feet=temp.feet+(temp.inches/12);
        temp.inches=temp.inches%12;
    }
    return temp;
}
int main()
{
    Distance d1,d2,total;
    cout<<"enter first dustance"<<endl;
    d1.input();
    cout<<"enter second distance"<<endl;
    d2.input();
    total=addDistance(d1,d2);
    cout<<"\n Total distance";
    total.display();
    return 0;
}