
#include <iostream>
using namespace std;

class Bill {
private:
    int numberOfItems;
    double totalAmount;

public:
    Bill(int items, double amount) {
        numberOfItems = items;
        totalAmount = amount;
    }

    Bill operator+(const Bill& other) const {
        return Bill(
            numberOfItems + other.numberOfItems,
            totalAmount + other.totalAmount
        );
    }

    bool operator>(const Bill& other) const {
        return totalAmount > other.totalAmount;
    }

    void display() const {
        cout << "Number of items: " << numberOfItems
             << "\nTotal amount: Rs. "
             << totalAmount << endl;
    }
};

int main() {
    Bill b1(3, 500.0);
    Bill b2(5, 800.0);

    cout << "First bill:\n";
    b1.display();

    cout << "\nSecond bill:\n";
    b2.display();

    Bill b3 = b1 + b2;

    cout << "\nCombined bill:\n";
    b3.display();

    cout << "\nComparison of original bills:\n";

    if (b1 > b2)
        cout << "First bill has a greater amount.\n";
    else if (b2 > b1)
        cout << "Second bill has a greater amount.\n";
    else
        cout << "Both bills have equal amounts.\n";

    return 0;
}
