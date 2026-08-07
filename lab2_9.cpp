#include <iostream>
#include <string>
using namespace std;
class CricketPlayer {
private:
    string playerName;
    int matchesPlayed;
    int totalRunsScored;

public:
    void acceptDetails() {
        cout << "Enter Player Name: ";
        cin.ignore(); 
        getline(cin, playerName);
        
        cout << "Enter Matches Played: ";
        cin >> matchesPlayed;
        
        cout << "Enter Total Runs Scored: ";
        cin >> totalRunsScored;
    }
    double calculateAverage() {
        if (matchesPlayed == 0) {
            return 0.0; 
        }
        return static_cast<double>(totalRunsScored) / matchesPlayed;
    }
    void displayReport() {
        double avg = calculateAverage();
        string performance;

        // Classification criteria
        if (avg >= 50.0) {
            performance = "Excellent";
        } else if (avg >= 35.0 && avg < 50.0) {
            performance = "Good";
        } else if (avg >= 20.0 && avg < 35.0) {
            performance = "Average";
        } else {
            performance = "Poor";
        }

        // Displaying the report
        cout << "\n------ Player Performance Report ------" << endl;
        cout << "Player Name:    " << playerName << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Total Runs:     " << totalRunsScored << endl;
        cout << "Batting Average: " << avg << endl;
        cout << "Performance:    " << performance << endl;
        cout << "---------------------------------------" << endl;
    }
};
int main() {
    CricketPlayer player;
    cout << "--- Input Player Data ---" << endl;
    player.acceptDetails();
    player.displayReport();

    return 0;
}