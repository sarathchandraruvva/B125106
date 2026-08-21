#include <iostream>
using namespace std;

class ServiceManager;

class VehicleService
{
private:
    string vehicleNumber;
    string ownerName;
    bool serviceDue;
    int lastServiceKm;

public:
    VehicleService()
    {
        serviceDue = false;
        lastServiceKm = 0;
    }

    void getData()
    {
        cout << "Enter Vehicle Number: ";
        cin >> vehicleNumber;

        cout << "Enter Owner Name: ";
        cin >> ownerName;

        cout << "Enter Last Service Kilometres: ";
        cin >> lastServiceKm;

        cout << "Is Service Due? (1/0): ";
        cin >> serviceDue;
    }

    friend class ServiceManager;
};

class ServiceManager
{
public:
    void display(VehicleService &v)
    {
        cout << "\n--- Vehicle Service Information ---\n";
        cout << "Vehicle Number: " << v.vehicleNumber << endl;
        cout << "Owner Name: " << v.ownerName << endl;
        cout << "Last Service KM: " << v.lastServiceKm << endl;
        cout << "Service Due: "
             << (v.serviceDue ? "Yes" : "No") << endl;
    }

    void completeService(VehicleService &v)
    {
        v.serviceDue = false;
        cout << "Service marked as completed.\n";
    }

    void updateKm(VehicleService &v, int km)
    {
        v.lastServiceKm = km;
        cout << "Last service kilometres updated.\n";
    }

    void checkService(VehicleService &v)
    {
        if (v.serviceDue)
            cout << "Vehicle requires servicing.\n";
        else
            cout << "Vehicle does not require servicing.\n";
    }
};

int main()
{
    VehicleService v;
    ServiceManager sm;

    v.getData();

    sm.display(v);
    sm.checkService(v);
    sm.completeService(v);
    sm.updateKm(v, 15000);
    sm.display(v);

    return 0;
}