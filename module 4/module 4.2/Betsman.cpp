#include<iostream>
using namespace std;

// Base class
class Cricketer {
public:
    string name;

    void inputName() {
        cout << "Enter the name of the cricketer: ";
        cin >> name;
    }
};

// Derived class
class Batsman : public Cricketer {
    int totalRuns, matchesPlayed;
    float bestPerformance;

public:
    // Function to input data
    void inputData() {
        cout << "Enter total runs scored: ";
        cin >> totalRuns;
        cout << "Enter total matches played: ";
        cin >> matchesPlayed;
        cout << "Enter best performance (highest runs in a match): ";
        cin >> bestPerformance;
    }

    // Function to calculate average runs
    float calculateAverageRuns() {
        return (float)totalRuns / matchesPlayed;
    }

    // Function to display data
    void displayData() {
        cout << "Cricketer Name: " << name << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Best Performance: " << bestPerformance << endl;
        cout << "Average Runs: " << calculateAverageRuns() << endl;
    }
};

int main() {
    // Creating object of Batsman class
    Batsman batsman;

    batsman.inputName();
    batsman.inputData();
    batsman.displayData();

    return 0;
}
