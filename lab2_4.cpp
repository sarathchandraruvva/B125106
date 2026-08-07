#include<iostream>
#include<string.h>
using namespace std;
class HOSTELROOM{
    public:
    int room_number;
    string guest_name;
    int days_stayed;
    float cost_perday;
    float room_rent;
    void accept_details(){
        cout<<"Enter the room number"<<endl;
        cin>>room_number;
        cout<<"Enter the guest name:"<<endl;
        cin>>guest_name;
        cout<<"Enter number of days stayed:"<<endl;
        cin>>days_stayed;
        cout<<"Enter cost charged per day:"<<endl;
        cin>>cost_perday;
    }
    float calculate_roomrent(){
        room_rent = days_stayed * cost_perday;
        return room_rent;
    }
    void display(){
        cout<<"The guest name is :"<<guest_name<<endl;
        cout<<"the room number is :"<<room_rent<<endl;
        cout<<"the number of days stayed is :"<<days_stayed<<endl;
        cout<<"The roomrent is :"<<calculate_roomrent()<<endl;
    }
};
int main(){
    HOSTELROOM h1;
    h1.accept_details();
    h1.calculate_roomrent();
    h1.display();
    return 0;
}
