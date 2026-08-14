#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of elements in an array: "<<endl;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array in reverse order is : "<<endl;
    for(int i=n-1;i>=0;i--){
        cout<< arr[i]<<" "; 
    }
    delete[] arr;
    return 0;
}