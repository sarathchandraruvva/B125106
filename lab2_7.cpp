#include<iostream>
#include<string.h>
using namespace std;
class MOVIETICKET{
    public:
    string movie_name;
    int ticket_price;
    int tickets;
    int total_cost;
    void accept_details(){
        cout<<"enter the movie name: "<<endl;
        cin>>movie_name;
        cout<<"Enter the ticket price: "<<endl;
        cin>>ticket_price;
        cout<<"Enter the no of tickets: "<<endl;
        cin>>tickets;
    }
    int calculate_totalcost(){
        total_cost = tickets * ticket_price;
        return total_cost;
    }
    void display(){
        cout<<"the movie name is :"<<movie_name;
        cout<<"The no of tickets is :"<<tickets;
        cout<<"total cost is :"<<calculate_totalcost();
    }
};
int main(){
    MOVIETICKET m1;
    m1.accept_details();
    m1.calculate_totalcost();
    m1.display();
    return 0;
}
