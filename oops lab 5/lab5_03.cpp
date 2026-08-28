#include<iostream>
using namespace std;
void check(int n){
    if(n>0){
        cout<<n<<" is positive"<<endl;
    }
    else if(n=0){
        cout<<"n is zero"<<endl;
    }
    else{
        cout<<n<<" is negative"<<endl;
    }
}
void check(char c){
    if(c>='A' && c<='Z'){
        cout<<c<<" is upper case character"<<endl;
    }
    if(c>='a' && c<='z'){
        cout<<c<<" is lowercase character"<<endl;
    }
    else{
        cout<<c<<"is a symbol"<<endl;
    }
}
void check(char arr[],char c,int size){
    int flag=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==c){
            flag=0;
            cout<<"Character "<<c<<" is found in character array at position "<<i+1<<endl;
            break;
        }
    }
    if(flag==-1){
        cout<<"Character "<<c<<" is not found in character array";
    }
}
int main(){
    check(25);
    check('P');
    char arr[] = {'p','i','k','t'};
    check(arr,'p',4);
    return 0;
}