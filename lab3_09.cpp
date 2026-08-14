#include<iostream>
#include<string>
using namespace std;
class employee{
    public:
    int id;
    string name;
    float salary;
    void accept(){
        cout<<" enter The id of employee "<<endl;
        cin>>id;
        cout<<"Enter the name of employee "<<endl;
        cin>>name;
        cout<<"Enter The salary of employee "<<endl;
        cin>>salary;
    }
    void display(){
        cout<<"The id of employee is "<<id<<endl;
        cout<<"The name of employee is "<<name<<endl;
        cout<<"The salary of employee is "<<salary<<endl;
    }
    float getsalary(){
        return salary;
    }
};
    void highest(employee *arr,int n){
        float high = arr[0].getsalary();
        for(int i=1;i<n;i++){
            if(arr[i].getsalary()>high){
                high = arr[i].getsalary();
            }
        }
        cout<<"The highest salary of employee is "<<high<<endl;
    }
    void average(employee *arr,int n){
        float sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i].getsalary();
        } 
        float avg = sum/n;
        cout<<"The average of all salaries is "<<avg;
    }
int main(){
    int n;
    cout<<"Enter the number of employees : "<<endl;
    cin>>n;
    employee *arr = new employee[n];
    for(int i=0;i<n;i++){
        arr[i].accept();
    }
    for(int i=0;i<n;i++){
        arr[i].display();
    }
    highest(arr,n);
    average(arr,n);

    delete[] arr;
    return 0;
}