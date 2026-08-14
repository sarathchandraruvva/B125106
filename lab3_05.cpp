#include<iostream>
#include<string>
using namespace std;
class book{
    public:
    int book_id;
    string book_title;
    string author;
    float price;
    void acceptdetails(){
        cout<<"enter the book id : "<<endl;
        cin>>book_id;
        cout<<"enter the book title : "<<endl;
        cin>>book_title;
        cout<<"Enter author name : "<<endl;
        cin>>author;
        cout<<"Enter the price : "<<endl;
        cin>>price;
    }
    void display(){
        cout<<"The book id is : "<<book_id<<endl;
        cout<<"The book title is : "<<book_title<<endl;
        cout<<"The author of this book is :"<<author<<endl;
        cout<<"The price of this book is : "<<price;
    }
};
int main(){
    book *b1 = new book;
    b1->acceptdetails();
    b1->display();
    delete b1;
    return 0;
}