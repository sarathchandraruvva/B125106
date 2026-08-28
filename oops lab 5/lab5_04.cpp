#include<iostream>
using namespace std;
int process(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
float process(float arr[],int size){
    float sum = 0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int process(int arr[],int size,int k){
    int sum = 0;
    if(k<=size){
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
    }
    else{
        cout<<"The k is larger than original size of integer array "<<endl;
    }
}
int main(){
    int arr_int[] = {10,20,30,40,50};
    float arr_float[] = {8.6,10.6,5.5,4.8};
    cout<<"the sum of all elementts in an integer array arr_int[] is "<<process(arr_int,5)<<endl;
    cout<<"the sum of all elementts in an floating array arr_float[] is "<<process(arr_float,4)<<endl;
    cout<<"The sum of first 3 elements of arr_int is "<<process(arr_int,5,3)<<endl;
    return 0;
}