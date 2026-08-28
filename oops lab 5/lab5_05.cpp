#include<iostream>
using namespace std;
void swapdata(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void swapdata(double &a,double &b){
    double temp = a;
    a = b;
    b = temp;
}
void swapdata(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}
int main(){
    int x,y;
    double p,q;
    cout<<"Enter x and y: "<<endl;
    cin>>x>>y;
    cout<<"The elements x and y before swap are "<<x<<y<<endl;
    swapdata(x,y);
    cout<<"The numbers x and y after swap are "<<x<<y<<endl;
    cout<<"Enter p and q: "<<endl;
    cin>>p>>q;
    cout<<"The elements p and q before swap are "<<p<<q<<endl;
    swapdata(p,q);
    cout<<"The numbers p and q after swap are "<<p<<q<<endl;
    cout<<"Enter x and y: "<<endl;
    cin>>x>>y;
    cout<<"The elements x and y before swap are "<<x<<y<<endl;
    swapdata(&x,&y);
    cout<<"The numbers x and y after swap are "<<x<<y<<endl;
    return 0;
}
