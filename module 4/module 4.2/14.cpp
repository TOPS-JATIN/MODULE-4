#include<iostream>
using namespace std;

// Template function for swapping
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 10, num2 = 20;

    cout << "Before swapping," << endl;
    cout << "Number 1: " << num1 << ", Number 2: " << num2 << endl;

    swapValues(num1, num2);

    cout << "After swapping," << endl;
    cout << "Number 1: " << num1 << ", Number 2: " << num2 << endl;

    return 0;
}
