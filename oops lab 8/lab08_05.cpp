#include <iostream>
using namespace std;

// Base class
class Scholarship {
public:
    virtual double calculateAward(double marks,double familyIncome) {
        return 0;
    }
};

// Merit scholarship
class MeritScholarship : public Scholarship {
public:
    double calculateAward(double marks,double familyIncome) override {

        if (marks >= 90) {
            return 20000;
        }
        else if (marks >= 80) {
            return 10000;
        }
        else {
            return 0;
        }
    }
};

// Need-based scholarship
class NeedBasedScholarship : public Scholarship {
public:
    double calculateAward(double marks,double familyIncome) override {

        if (familyIncome < 200000 && marks >= 70) {
            return 25000;
        }
        else {
            return 0;
        }
    }
};

int main() {
    MeritScholarship merit;
    NeedBasedScholarship need;

    Scholarship *ptr;

    double marks = 92;
    double familyIncome = 150000;

    ptr = &merit;

    cout << "Merit Scholarship: Rs. "<< ptr->calculateAward(marks, familyIncome)<< endl;

    ptr = &need;

    cout << "Need-Based Scholarship: Rs. "<< ptr->calculateAward(marks, familyIncome)<< endl;

    return 0;
}