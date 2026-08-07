#include<iostream>
#include<string.h>
using namespace std;
class MOBILERECHARGE{
    public:
    long long mobile_number;
    string customer_name;
    double current_balance;
    int amount;
    void accept_details(){
        cout<<"Enter customer name :"<<endl;
        cin>>customer_name;
        cout<<"Enter customer mobile number :"<<endl;
        cin>>mobile_number;
        cout<<"Enter current balance of customer: "<<endl;
        cin>>current_balance;
    }
    void recharge_balance(){
        cout<<"Enter the amount :"<<endl;
        cin>>amount;
        if(current_balance>amount){
            current_balance = current_balance - amount;
            cout<<"The current balance is after recharge is:"<<current_balance;
        }
        else{
            cout<<"The current balance is not sufficient for balance!"<<endl;
        }  
    }
};
int main(){
    MOBILERECHARGE m1;
    m1.accept_details();
    m1.recharge_balance(); 
    return 0;
}
