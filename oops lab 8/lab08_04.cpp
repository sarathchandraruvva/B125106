#include <iostream>
using namespace std;

// Base class
class BackupPolicy {
public:
    virtual double calculateStorage(double dataSize) {
        return 0;
    }
};

// Full backup
class FullBackup : public BackupPolicy {
public:
    double calculateStorage(double dataSize) override {
        return dataSize;
    }
};

// Incremental backup
class IncrementalBackup : public BackupPolicy {
public:
    double calculateStorage(double dataSize) override {
        return (0.25 * dataSize) + 50;
    }
};

int main() {
    FullBackup full;
    IncrementalBackup incremental;

    BackupPolicy *ptr;

    double dataSize = 1000;

    ptr = &full;
    cout << "Full Backup Storage: "
         << ptr->calculateStorage(dataSize)
         << " MB" << endl;

    ptr = &incremental;
    cout << "Incremental Backup Storage: "
         << ptr->calculateStorage(dataSize)
         << " MB" << endl;

    return 0;
}