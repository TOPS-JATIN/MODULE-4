#include<iostream>
using namespace std;

class Arithmetic {
    int a, b;

public:
    // Constructor to initialize the values
    Arithmetic(int a, int b) {
        this->a = a;
        this->b = b;
    }

    // Function for addition
    void add() {
        cout << "Addition of " << a << " and " << b << " is: " << a + b << endl;
    }

    // Function for subtraction
    void subtract() {
        cout << "Subtraction of " << a << " and " << b << " is: " << a - b << endl;
    }

    // Function for multiplication
    void multiply() {
        cout << "Multiplication of " << a << " and " << b << " is: " << a * b << endl;
    }

    // Function for division
    void divide() {
        if(b != 0)
            cout << "Division of " << a << " by " << b << " is: " << (float)a / b << endl;
        else
            cout << "Division by zero is not defined." << endl;
    }
};

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Creating object of Arithmetic class
    Arithmetic arith(num1, num2);

    arith.add();
    arith.subtract();
    arith.multiply();
    arith.divide();

    return 0;
}
