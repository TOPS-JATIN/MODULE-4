#include<iostream>
using namespace std;

// Function to calculate area of circle
float area(float radius) {
    return 3.14 * radius * radius;
}

// Function to calculate area of rectangle
float area(float length, float breadth) {
    return length * breadth;
}

// Function to calculate area of triangle
float area(float base, float height, int _) {
    return 0.5 * base * height;
}

int main() {
    float radius = 5.0f;
    float length = 10.0f, breadth = 6.0f;
    float base = 8.0f, height = 12.0f;

    cout << "Area of circle: " << area(radius) << endl;
    cout << "Area of rectangle: " << area(length, breadth) << endl;
    cout << "Area of triangle: " << area(base, height, 0) << endl;

    return 0;
}
