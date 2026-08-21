#include<iostream>
#include<string>
using namespace std;
class eventparticipant{
    string name;
    int age;
    string registration_status="active";
    public:
    void input(){
        cout<<"enter the participant name : "<<endl;
        cin>>name;
        cout<<"Enter the age "<<endl;
        cin>>age;
    }
    friend void verifyparticipant(eventparticipant);
};
void verifyparticipant(eventparticipant e){
    if(e.age>18 && e.registration_status=="active"){
        cout<<"eligible";
    }
    else if(e.age<18){
        e.registration_status = "inactive";
        cout<<"Not eligible"<<endl;
    }
}
int main(){
    eventparticipant e;
    e.input();
    verifyparticipant(e);
    return 0;
}