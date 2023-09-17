#include<iostream>
using namespace std;

// Base class
class Student {
public:
    int rollNumber;

    void inputRollNumber() {
        cout << "Enter the roll number of the student: ";
        cin >> rollNumber;
    }
};

// Intermediate class
class Test : public Student {
public:
    float subject1, subject2;

    void inputMarks() {
        cout << "Enter the marks obtained in subject 1: ";
        cin >> subject1;
        cout << "Enter the marks obtained in subject 2: ";
        cin >> subject2;
    }
};

// Derived class
class Result : public Test {
public:
    float totalMarks;

    void calculateTotalMarks() {
        totalMarks = subject1 + subject2;
    }

    void displayResult() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks in Subject 1: " << subject1 << endl;
        cout << "Marks in Subject 2: " << subject2 << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    // Creating object of Result class
    Result studentResult;

    studentResult.inputRollNumber();
    studentResult.inputMarks();
    studentResult.calculateTotalMarks();
    studentResult.displayResult();

    return 0;
}
