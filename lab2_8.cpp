#include<iostream>
#include<string.h>
using namespace std;
class HOSTELFEE{
    public:
    string student_name;
    long long hostel_ID;
    double month_fee;
    int months;
    int total_fee;
    int max_months = 12;
    void accept_details(){
        cout<<"Enter the student name:"<<endl;
        cin>>student_name;
        cout<<"Enter the hostel ID: "<<endl;
        cin>>hostel_ID;
        cout<<"Enter the month fee:"<<endl;
        cin>>month_fee;
    }
    int calculate_totalfee(){
        total_fee = months * month_fee;
        int total_fee;
    }
    int latefine(){
        if(months>max_months){
            total_fee += 500;
        }
        return total_fee;
    }
    void display(){
        cout<<"The student name is :"<<student_name;
        cout<<"The hostel Id is :"<<hostel_ID;
        cout<<"The total fee is :"<<calculate_totalfee();
    }
};
int main(){
    HOSTELFEE h1;
    h1.accept_details();
    h1.calculate_totalfee();
    h1.latefine();
    h1.display();
    return 0;
}