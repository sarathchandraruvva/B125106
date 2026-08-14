#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of elements in an array: "<<endl;
    cin>>n;
    int count_even = 0;
    int count_odd = 0;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
     }
     delete[] arr;
     return 0;
}