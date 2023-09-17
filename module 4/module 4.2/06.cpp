#include<iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void initializePerson(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
public:
    float percentage;

    void initializeStudent(string n, int a, float p) {
        initializePerson(n, a);
        percentage = p;
    }

    void displayStudent() {
        displayPerson();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

// Derived class
class Teacher : public Person {
public:
    float salary;

    void initializeTeacher(string n, int a, float s) {
        initializePerson(n, a);
        salary = s;
    }

    void displayTeacher() {
        displayPerson();
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    // Creating objects of Student and Teacher classes
    Student student;
    Teacher teacher;

    student.initializeStudent("John", 20, 85.5);
    teacher.initializeTeacher("Smith", 45, 50000);

    cout << "Student Details:" << endl;
    student.displayStudent();

    cout << "\nTeacher Details:" << endl;
    teacher.displayTeacher();

    return 0;
}
