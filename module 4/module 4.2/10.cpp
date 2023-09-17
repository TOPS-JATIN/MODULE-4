#include<iostream>
#include<string>
using namespace std;

class String {
public:
    string str;

    // Constructor to initialize string
    String(string s) {
        str = s;
    }

    // Overloading + operator for string concatenation
    String operator+(String s) {
        return String(str + s.str);
    }

    // Function to display string
    void display() {
        cout << str << endl;
    }
};

int main() {
    String s1("Hello"), s2(" World"), s3("");

    s3 = s1 + s2;

    cout << "After concatenation," << endl;
    s3.display();

    return 0;
}
