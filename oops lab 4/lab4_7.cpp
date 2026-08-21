#include <iostream>
using namespace std;

class MuseumManager;

class Exhibit
{
private:
    string exhibitName;
    int exhibitID;
    int visitorCount;
    bool displayStatus;

public:
    Exhibit()
    {
        visitorCount = 0;
        displayStatus = false;
    }

    void getData()
    {
        cout << "Enter Exhibit Name: ";
        cin >> exhibitName;

        cout << "Enter Exhibit ID: ";
        cin >> exhibitID;
    }

    friend class MuseumManager;
};

class MuseumManager
{
public:
    void display(Exhibit &e)
    {
        cout << "\n--- Exhibit Information ---\n";
        cout << "Exhibit Name: " << e.exhibitName << endl;
        cout << "Exhibit ID: " << e.exhibitID << endl;
        cout << "Visitor Count: " << e.visitorCount << endl;
        cout << "Status: " << (e.displayStatus ? "Open" : "Closed") << endl;
    }

    void addVisitors(Exhibit &e, int n)
    {
        e.visitorCount += n;
        cout << n << " visitors added.\n";
    }

    void resetVisitors(Exhibit &e)
    {
        e.visitorCount = 0;
        cout << "Visitor count reset.\n";
    }

    void openExhibit(Exhibit &e)
    {
        e.displayStatus = true;
        cout << "Exhibit opened.\n";
    }

    void closeExhibit(Exhibit &e)
    {
        e.displayStatus = false;
        cout << "Exhibit closed.\n";
    }

    void checkStatus(Exhibit &e)
    {
        cout << "Exhibit is "
             << (e.displayStatus ? "Open" : "Closed") << endl;
    }
};

int main()
{
    Exhibit e;
    MuseumManager mm;

    e.getData();

    mm.openExhibit(e);
    mm.addVisitors(e, 25);
    mm.display(e);
    mm.checkStatus(e);
    mm.resetVisitors(e);
    mm.closeExhibit(e);

    return 0;
}