#include<iostream>
using namespace std;
int information(char arr[],int size){
    int count = 0;
    for(int i=0;i<size;i++){
        count++;
    }
    return count;
}
int information(char arr[],int size,char ch){
    int count = 0;
    for(int i=0;i<size;i++){
        if(ch==arr[i]){
            count++;
        }
    }
    return count;
}
int information(char arr[],int size,int k,char ch){
    int count = 0;
    if(k<=size){
        for(int i=0;i<k;i++){
            if(ch==arr[i]){
                count++;
            }
        }
    }
    else{
        cout<<"K is greater than size of originla character array "<<endl;
    }
}
int main(){
    char arr[] = {'p','r','o','u','d'};
    char ch = 'r';
    information(arr,5);
    information(arr,5,ch);
    information(arr,5,4,ch);
    return 0;
}