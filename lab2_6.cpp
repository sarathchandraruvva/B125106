#include<iostream>
using namespace std;
class TIME{
    public:
    int hours;
    int minutes;
    int n = 2;
    void input(){
            cout<<"Enter the hours value :"<<endl;
            cin>>hours;
            cout<<"Enter the minutes value :"<<endl;
            cin>>minutes;
    }
    void addtime(TIME t1,TIME t2){
        minutes = t1.minutes+t2.minutes;
        hours = t1.hours + t2.hours;
        hours += minutes/60;
        minutes = minutes%60;
    }
    void display(){
        cout<<hours<<"hr "<<minutes<<"min"<<endl;
    }
};
int main(){
    TIME t1,t2,t3;
    cout<<"Enter details for first time obj:"<<endl;
    t1.input();
    cout<<"Enter details for second time obj:"<<endl;
    t2.input();
    t3.addtime(t1,t2);
    cout<<"\n Resulting time after addition ";
    t3.display();
    return 0;
}