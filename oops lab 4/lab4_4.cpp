#include<iostream>
#include<string>
using namespace std;
class electricmeter{
    string modelno;
    string customer_name;
    int units;
    public:
    void input(){
        cout<<"enter the model number : "<<endl;
        cin>>modelno;
        cout<<"Enter the customer name : "<<endl;
        cin>>customer_name;
        cout<<"Enter the units consumed : "<<endl;
        cin>>units;
    }
    friend void checkusage(electricmeter);
};
void checkusage(electricmeter e){
    cout<<"The customer name is : "<<e.customer_name;
    cout<<"The model number is : "<<e.modelno;
    cout<<"The total units consumed is : "<<e.units;
    if(e.units<100){
        cout<<"Low usage"<<endl;
    }
    else if(e.units>100&&e.units<500){
        cout<<"Moderate usage "<<endl;
    }
    else{
        cout<<"high usage";
    }
}
int main(){
    electricmeter e;
    e.input();
    checkusage(e);
    return 0;
}