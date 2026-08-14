#include<iostream>
using namespace std;
int main(){
    int *num1 = new int;
    int *num2 = new int;
    cout<<"enter two numbers: "<<endl;
    cin>>*num1>>*num2;
    cout<<"The addition of two numbers is "<<*num1+*num2;
    cout<<"the subtraction of two numbers is "<<*num1 - *num2;
    cout<<"the product of two numbers is "<<*num1 * *num2;
    if(*num2 == 0){
        cout<<"Not possible as b is denominator"<<endl;
    }   
    cout<<"The division of two numbers is "<<*num1 / *num2;
    delete num1;
    delete num2;
    return 0;
}