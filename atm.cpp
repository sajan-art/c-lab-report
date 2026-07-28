#include<iostream>
using namespace std;
int main (){

    int balance ;
    int withdraw ;
    char card ;
    int num;
    
    cout <<"insert your card"<<endl;
    cin>>card;
    if (card =='y' || card =='N')
    {
        while(num!=9999)
        cout<<"enter the pass again"
    


        
        cout<<"enter your balance"<<endl;
         cin>>balance ;
         if ( balance >= withdraw )
         {
            cout <<"enter the amout of withdraw "<<endl;
            cin >>withdraw ;
            cout<<"Remaining Balance ="<< balance-withdraw<<endl;
        
         }
         else if (balance<=withdraw )
        {
            cout <<"insufficent balance"<<endl;
            cin >>balance;
            
        }
       
        {
        cout <<"thanks for choosing our bank" <<endl;
        }
return 0;
}
}