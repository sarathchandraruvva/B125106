#include<iostream>
using namespace std;
class TEMPERATURE{
    public:
    int celsius;
    float farenheit;
    void input(){
        cout<<"Enter the celsius temperature:"<<endl;
        cin>>celsius;
    }
    int convert_farenheit(){
        farenheit = (9.0/5.0)*celsius+32;
        return farenheit;
    }
    void display(){
        cout<<"The temperature in celsius is :"<<celsius<<endl;
        cout<<"The temperature in farenheit is :"<<convert_farenheit()<<endl;
    }
};
int main(){
    TEMPERATURE t1;
    t1.input();
    t1.convert_farenheit();
    t1.display();
    return 0;
}