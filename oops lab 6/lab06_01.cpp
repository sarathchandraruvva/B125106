#include <iostream>
#include <cstdlib>
using namespace std;

class Fraction {
private:
    int numerator, denominator;
    int gcd(int a, int b) const {
        a = abs(a);
        b = abs(b);
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    void simplify() {
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
        int g = gcd(numerator, denominator);
        if (g != 0) {
            numerator /= g;
            denominator /= g;
        }
    }
public:
    Fraction(int n = 0, int d = 1) {
        numerator = n;
        denominator = d;
        if (denominator == 0) {
            cout << "Error: Denominator cannot be zero!\n";
            exit(1);
        }
        simplify();
    }
    Fraction operator+(const Fraction& f) const {
        int n = numerator * f.denominator + f.numerator * denominator;
        int d = denominator * f.denominator;
        return Fraction(n, d);
    }
    Fraction operator-(const Fraction& f) const {
        int n = numerator * f.denominator- f.numerator * denominator;
        int d = denominator * f.denominator;
        return Fraction(n, d);
    }
    void display() const {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1(1, 2);
    Fraction f2(1, 3);

    cout << "First fraction: ";
    f1.display();

    cout << "Second fraction: ";
    f2.display();

    Fraction sum = f1 + f2;

    cout << "\nAddition result: ";
    sum.display();

    Fraction difference = f1 - f2;

    cout << "Subtraction result: ";
    difference.display();

    cout << "\nOriginal fractions after operations:\n";

    cout << "First fraction: ";
    f1.display();

    cout << "Second fraction: ";
    f2.display();

    return 0;
}
