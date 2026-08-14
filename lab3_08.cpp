#include<iostream>
using namespace std;
void accept(int n,int *arr){
    for(int i=0;i<n;i++){
         cin>> arr[i];
    }
}
int calculate_sum(int n,int *arr){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
}
int smallest(int n,int *arr){
    int small = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<small){
            small = arr[i];
        }
    }
    return small;
}
int largest(int n,int *arr){
    int large = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
    return large;
}
void display(int *arr,int n){
    cout<<"Element"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the no of elements in an array: "<<endl;
    cin>>n;
    int *arr = new int[n];
    accept(n , arr);
    display(arr,n);
    int sum = calculate_sum(n,arr);
    int small = smallest(n,arr);
    int large = largest(n,arr);
    cout<<"The sum of all elements in an array is "<<sum;
    cout<<"the largest element of an array "<<large;
    cout<<"The smallest element of an array "<<small;
    return 0;
}

