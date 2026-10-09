#include<iostream>
using namespace std;
class Duration{
    int hours;
    int minutes;
    public:
        Duration(int h=0,int m=0){
            hours = h+m/60;
            minutes = m%60;
        }
        Duration operator+(const Duration& d){
            return Duration(hours + d.hours,minutes+d.minutes);
        }
        void display(){
            cout<<hours<<"hours"<<minutes<<"minutes"<<endl;
        }
};
int main(){
    Duration d1(1,2),d2(4,57);
    cout<<"first Duration : ";
    d1.display();
    cout<<"Second Duration : ";
    d2.display();
    Duration d3 = d1+d2;
    cout<<"Final duration : "<<endl;
    d3.display();
    return 0;
}