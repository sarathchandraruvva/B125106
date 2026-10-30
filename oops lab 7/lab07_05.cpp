#include <iostream>
using namespace std;

// Base class
class Sensor {
protected:
    int sensorID;

public:
    Sensor(int id) {
        sensorID = id;
    }
};

// First derived class
class Temperature : virtual public Sensor {
protected:
    float temperature;

public:
    Temperature(int id, float temp)
        : Sensor(id) {
        temperature = temp;
    }
};

// Second derived class
class Humidity : virtual public Sensor {
protected:
    float humidity;

public:
    Humidity(int id, float hum)
        : Sensor(id) {
        humidity = hum;
    }
};

// Hybrid inheritance
class FarmMonitor :
    public Temperature,
    public Humidity {

public:
    FarmMonitor(int id, float temp, float hum)
        : Sensor(id),
          Temperature(id, temp),
          Humidity(id, hum) {}

    void display() {
        cout << "Sensor ID: " << sensorID << endl;
        cout << "Temperature: "<< temperature << " Celsius" << endl;

        cout << "Humidity: "<< humidity << "%" << endl;

        if (temperature > 35 || humidity > 80) {
            cout << "WARNING: Unsafe Farm Conditions!"<< endl;
        }
        else {
            cout << "Farm Conditions are Normal"<< endl;
        }
    }
};

int main() {
    FarmMonitor f(101, 38, 85);

    f.display();

    return 0;
}