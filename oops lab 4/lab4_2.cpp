#include<iostream>
#include<string>
using namespace std;
class useraccount{
    string username;
    string password;
    int login_attempts = 0;
    string account_status="active";
    public:
    void input(){
        cout<<"enter the username : "<<endl;
        cin>>username;
        cout<<"Enter the password : "<<endl;
        cin>>password;
        cout<<"Enter the login attempts : "<<endl;
        cin>>login_attempts;
    }
    friend void checkAccount(useraccount);
};
void checkAccount(useraccount u){
    string enterpassword;
    cout<<"Enter the password : "<<endl;
    cin>>enterpassword;
    while(u.login_attempts<3){
        if(u.password==enterpassword){
            cout<<"the username is : "<<u.username;
            cout<<"the no of login_attempts are "<<u.login_attempts;
            cout<<"The account status is "<<u.account_status;
            return;
        }
        else{
            u.login_attempts++;
            cout<<"Enter the password :  "<<endl;
            cin>>enterpassword;
        }
    }
}
int main(){
    useraccount u;
    u.input();
    checkAccount(u);
    return 0;
}