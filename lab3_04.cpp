#include<iostream>
using namespace std;
int main(){
    int n,key;
    cout<<"Enter the no of elements in an array: "<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the array elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the key element u want to search in an array"<<endl;
    cin>>key;
    int flag = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            flag = 0;
            cout<<"the key element is found at index "<<i<<endl;
            cout<<"search is successful"<<endl;
            break;
        }
    }
    if(flag==-1){
        cout<<"The search is unsuccessful"<<endl;
    }
    return 0;
    
    
}