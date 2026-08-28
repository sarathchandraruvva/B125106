#include<iostream>
using namespace std;
int convert(int km){
    int mts = km * 1000;
    return mts;
}
float convert(float mts){
    float cms = mts * 100;
    return cms;
}
float convert(float km){
    int mts = km * 1000;
    return mts;
}
int main(){
    cout<<"Convert 5kms to mtrs is "<<convert(5)<<endl;
    cout<<"Convert 50 mts to cmtrs is "<<convert(50)<<endl;
    cout<<"Convert 4.9 kms to mtrs is "<<convert(4.9f)<<endl;
    return 0;
}

