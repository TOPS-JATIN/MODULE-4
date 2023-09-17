#include<iostream>
using namespace std;

class Number {
    int num;

public:
    // Constructor to initialize number
    Number(int n) {
        num = n;
    }

    // Friend function to find max number
    friend int maxNumber(Number, Number);
};

// Function to find max number
int maxNumber(Number n1, Number n2) {
    if(n1.num > n2.num)
        return n1.num;
    else
        return n2.num;
}

int main() {
    Number num1(10), num2(20);

    cout << "The maximum number is: " << maxNumber(num1, num2) << endl;

    return 0;
}
