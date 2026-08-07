#include <iostream>
#include <string>
using namespace std;
class WaterBill{
private:
    int consumerNo;
    string consumerName;
    int waterConsumption;
    double bill;
public:
    void accept()
    {
        cout << "Enter Consumer Number: ";
        cin >> consumerNo;
        cin.ignore();
        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);
        cout << "Enter Water Consumption (litres): ";
        cin >> waterConsumption;
    }

    void calculateBill()
    {
        if (waterConsumption <= 500){
            bill = waterConsumption * 2;
        }
        else if (waterConsumption <= 1000){
            bill = (500 * 2) + ((waterConsumption - 500) * 3);
        }
        else{
            bill = (500 * 2) + (500 * 3) + ((waterConsumption - 1000) * 5);
        }
    }

    void display()
    {
        cout << "\n------ WATER BILL ------" << endl;
        cout << "Consumer Number : " << consumerNo << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        cout << "Water Used      : " << waterConsumption << " litres" << endl;
        cout << "Total Bill      : Rs. " << bill << endl;
    }
};
int main()
{
    WaterBill w;
    w.accept();
    w.calculateBill();
    w.display();
    return 0;
}