#include<iostream>
using namespace std;
class book{
    string title;
    float price;
    public:
        book(string s,float p){
            title=s;
            price=p;
        }
        bool operator<(const book& b){
            if(price<=b.price){
                return title<b.title;
            }
            return price<b.price;
        }
};
int main(){
    book b1("Atomic habits",450);
    book b2("manas action",250);
    if(b1<b2){
        cout<<"First book is smaller"<<endl;
    }
    else{
        cout<<"Second book is smaller"<<endl;
    }
    return 0;
}