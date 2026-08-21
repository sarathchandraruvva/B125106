#include<iostream>
#include<string>
using namespace std;
class weather{
    string cityname;
    float temperature;
    string weather_condition;
    public:
    void input(){
        cout<<"enter the city name :"<<endl;
        cin>>cityname;
        cout<<"Enter the temperature : "<<endl;
        cin>>temperature;
        cout<<"Enter the weather status : "<<endl;
        cin>>weather_condition;
    }
    friend void generateReport(weather);
};
void generateReport(weather w){
    cout<<"The name of city is "<<w.cityname;
    cout<<"The temperature of city is "<<w.temperature;
    cout<<"The weather condition of city is "<<w.weather_condition;
    if(w.temperature>35){
        cout<<"very hot"<<endl;
    }
    else if(w.temperature>20 && w.temperature<35){
        cout<<"Pleasant"<<endl;
    }
    else if(w.temperature<20){
        cout<<"Cool"<<endl;
    }
}
int main(){
    weather w;
    w.input();
    generateReport(w);
    return 0;
}
