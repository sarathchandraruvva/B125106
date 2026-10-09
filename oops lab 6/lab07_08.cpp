
#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;

public:
    Temperature(double c) {
        celsius = c;
    }

    bool operator>(const Temperature& other) const {
        return celsius > other.celsius;
    }

    bool operator<(const Temperature& other) const {
        return celsius < other.celsius;
    }

    Temperature operator-() const {
        return Temperature(-celsius);
    }

    void display() const {
        cout << celsius << " degree Celsius" << endl;
    }
};

int main() {
    Temperature t1(35.0);
    Temperature t2(20.0);

    cout << "First temperature: ";
    t1.display();

    cout << "Second temperature: ";
    t2.display();

    cout << "\nComparison results:\n";

    if (t1 > t2)
        cout << "First temperature is greater.\n";

    if (t1 < t2)
        cout << "First temperature is smaller.\n";
    else
        cout << "First temperature is not smaller.\n";

    Temperature t3 = -t1;

    cout << "\nNegated first temperature: ";
    t3.display();

    cout << "Original first temperature: ";
    t1.display();

    return 0;
}
