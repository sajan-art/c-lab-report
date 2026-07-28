// wap in c++ to define a class account with private data members account number and balance. Implement public member function to initialize and display account details, demonstrating the concept of accessing class members.
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
int main()
{
    account a1;
    a1.inatialize(101,50000);
    a1.display();
    return 0;
}