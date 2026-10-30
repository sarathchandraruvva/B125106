#include<iostream>
#include<string>
using namespace std;
class Ticket{
    protected:
    string name;
    double distance;
    Ticket(string s,double k){
        name=s;
        distance=k;
    }
};
class RailwayTicket:public Ticket{
    private:
        double fareperKm;
        double fare;
    public:
        RailwayTicket(string n,double d,double rate):Ticket(n,d){
            fareperKm = rate;
        }
        void calculateFare(){
            double fare = distance * fareperKm;
            if(distance>300){
                fare = fare-(fare*0.1);
            }
        }
        void display(){
            cout<<"Passenger name is "<<name<<endl;
            cout<<"Passenger travelled distance of "<<distance<<"kms"<<endl;
            cout<<"The total fare amount of passenger is "<<fare<<endl;
        }
};
int main(){
    RailwayTicket t("Sarath",320,3);
    t.calculateFare();
    t.display();
    return 0;
}