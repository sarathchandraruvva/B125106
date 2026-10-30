#include <iostream>
using namespace std;

// First base class
class LibraryAccess {
protected:
    int booksBorrowed;

public:
    LibraryAccess(int books) {
        booksBorrowed = books;
    }
};

// Second base class
class LaboratoryAccess {
protected:
    int pendingSubmissions;

public:
    LaboratoryAccess(int submissions) {
        pendingSubmissions = submissions;
    }
};

// Derived class
class StudentAccess :
    public LibraryAccess,
    public LaboratoryAccess {

public:
    StudentAccess(int books, int submissions): LibraryAccess(books),LaboratoryAccess(submissions) {}

    void displayAccess() {
        cout << "Books Borrowed: "<< booksBorrowed << endl;

        cout << "Pending Lab Submissions: "<< pendingSubmissions << endl;

        if (booksBorrowed <= 5 && pendingSubmissions == 0) {
            cout << "Full Resource Access Granted" << endl;
        }
        else {
            cout << "Full Resource Access Denied" << endl;
        }
    }
};

int main() {
    StudentAccess s(3, 0);

    s.displayAccess();

    return 0;
}