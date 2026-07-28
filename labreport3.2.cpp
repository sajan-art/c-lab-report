#include<iostream>
using namespace std;
class account
{
    private:
    int accountnumber;
    float balance;
    public:
    void inatialize (int acc, float bal)
    {
        accountnumber=acc;
        balance = bal;
    }
    void display()
    {
        cout<<"\n Account Details: "<< endl;
          cout<<"\n Account Number: "<<accountnumber<< endl;
            cout<<"Balance: "<<balance<< endl;

    }
};
