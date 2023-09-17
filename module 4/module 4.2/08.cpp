#include<iostream>
using namespace std;

// Function for addition
int operation(int a, int b) {
    return a + b;
}

// Function for subtraction
float operation(float a, float b) {
    return a - b;
}

// Function for multiplication
double operation(double a, double b) {
    return a * b;
}

// Function for division
double operation(double a, int b) {
    if(b != 0)
        return a / b;
    else {
        cout << "Division by zero is not defined." << endl;
        return 0;
    }
}

int main() {
    int num1 = 5, num2 = 3;
    float num3 = 7.2f, num4 = 4.3f;
    double num5 = 10.5, num6 = 2.5;

    cout << "Addition of " << num1 << " and " << num2 << " is: " << operation(num1, num2) << endl;
    cout << "Subtraction of " << num3 << " and " << num4 << " is: " << operation(num3, num4) << endl;
    cout << "Multiplication of " << num5 << " and " << num6 << " is: " << operation(num5, num6) << endl;
    cout << "Division of " << num5 << " by " << num2 << " is: " << operation(num5, num2) << endl;

    return 0;
}
