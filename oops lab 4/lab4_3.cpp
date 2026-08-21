#include<iostream>
#include<string>
using namespace std;
class camera{
    string brand;
    string model;
    int megapixels;
    long storage_capacity;
    public:
    void input(){
        cout<<"Enter the brand : "<<endl;
        cin>>brand;
        cout<<"Enter the model : "<<endl;
        cin>>model;
        cout<<"Enter the megapixels : "<<endl;
        cin>>megapixels;
        cout<<"Enter the storage capacity : "<<endl;
        cin>>storage_capacity;
    }
    friend void comparecamera(camera,camera);
};
void comparecamera(camera c1,camera c2){
    if(c1.megapixels>c2.megapixels){
        cout<<"Camera 1 is better "<<endl;
        cout<<"The brand is "<<c1.brand;
        cout<<"The model is "<<c1.model;
        cout<<"The megapixels is "<<c1.megapixels;
        cout<<"The storage capacity is "<<c1.storage_capacity;
    }
    else if(c1.megapixels<c2.megapixels){
        cout<<"Camera 2 is better "<<endl;
         cout<<"The brand is "<<c2.brand;
        cout<<"The model is "<<c2.model;
        cout<<"The megapixels is "<<c2.megapixels;
        cout<<"The storage capacity is "<<c2.storage_capacity;
    }
    else{
        if(c1.storage_capacity>c2.storage_capacity){
            cout<<"camera 1 is better"<<endl;
            cout<<"The brand is "<<c1.brand;
            cout<<"The model is "<<c1.model;
            cout<<"The megapixels is "<<c1.megapixels;
            cout<<"The storage capacity is "<<c1.storage_capacity;

        }
        else{
            cout<<"camera 2 is better"<<endl;
            cout<<"The brand is "<<c2.brand;
            cout<<"The model is "<<c2.model;
            cout<<"The megapixels is "<<c2.megapixels;
            cout<<"The storage capacity is "<<c2.storage_capacity;
        }
    }
}
int main(){
    camera c1,c2;
    c1.input();
    c2.input();
    comparecamera(c1,c2);
    return 0;
}