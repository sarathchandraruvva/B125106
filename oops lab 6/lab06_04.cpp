#include<iostream>
using namespace std;
class accountBalance{
    float balance;
    public:
        accountBalance(float b){
            balance=b;
        }
        accountBalance operator-(){
            return accountBalance(-balance);
        }
        void display(){
            cout<<"Balance = "<<balance<<endl;
        }
};
int main(){
    accountBalance a1(500);
    accountBalance a2 = -a1;
    cout<<"Original account:";
    a1.display();
    cout<<"Negated account"<<endl;
    a2.display();
    return 0;
}
