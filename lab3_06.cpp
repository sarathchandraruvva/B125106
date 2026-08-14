#include<iostream>
using namespace std;
class product{
    public:
    int product_id;
    string product_name;
    float price;
    int quantity;
    int total_cost;
    void accept_details(){
        cout<<"enter The product id : "<<endl;
        cin>>product_id;
        cout<<"enter the product name : "<<endl;
        cin>>product_name;
        cout<<"Enter the price of product : "<<endl;
        cin>>price;
        cout<<"enter quantity of product : "<<endl;
        cin>>quantity;
    }
    void getcost(){
        total_cost = quantity * price;
    }
    void display(){
        cout<<"The product id is "<<product_id<<endl;
        cout<<"The product name is "<<product_name<<endl;
        cout<<"The price of product is "<<price<<endl;
        cout<<"The quantity of product is "<<quantity<<endl;
        cout<<"The total cost is "<<total_cost;
    }
};
int main(){
    int n;
    int total = 0;
    cout<<"enter no of products : "<<endl;
    cin>>n;
    product *p = new product[n];
    for(int i=0;i<n;i++){
        cout<<"enter the details of product "<<i+1<<endl;
        p[i].accept_details();
        p[i].getcost();
    }
    for(int i=0;i<n;i++){
        cout<<"The details of product "<<i+1<<endl;
        p[i].display();
    }
    return 0;
}