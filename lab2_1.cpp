#include <iostream>
#include<string.h>
using namespace std;
class CAR{
    public:
    int car_number;
    string brand_name;
    int model_year;
    void acceptdetails(){
        cout<<"Enter the car number:"<<endl;
        cin>>car_number;
        cout<<"Enter the brand name:"<<endl;
        cin>>brand_name;
        cout<<"Enter the model year"<<endl;
        cin>>model_year; 
    }
    void display(){
        cout<<"The car number is "<<car_number;
        cout<<"The brand name is "<<brand_name;
        cout<<"The model year is "<<model_year;
    }
};
int main(){
    CAR c1;
    c1.acceptdetails();
    c1.display(); 
    return 0;
}