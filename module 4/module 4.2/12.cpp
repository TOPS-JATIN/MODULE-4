#include<iostream>
using namespace std;

class Number {
    public:
        int num;
        // Constructor to initialize number
        Number(int n) {
            num = n;
            cout << num<<endl;
        }
};

// Friend function to swap numbers
void swap(Number &n1, Number &n2) {
    n1.num = n1.num + n2.num;
    n2.num = n1.num - n2.num;
    n1.num = n1.num - n2.num;
}

int main() {
    Number num1(10), num2(20);

    cout << "Before swapping," << endl;
    cout << "Number 1: " << num1.num << endl;
    cout << "Number 2: " << num2.num << endl;

    swap(num1, num2);

    cout << "After swapping," << endl;
    cout << "Number 1: " << num1.num << endl;
    cout << "Number 2: " << num2.num << endl;

    return 0;
}
