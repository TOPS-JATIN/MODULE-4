#include<iostream>
using namespace std;

// Template function for sorting
template <typename T>
void sortArray(T arr[], int size) {
    for(int i=0; i<size-1; i++) {
        for(int j=i+1; j<size; j++) {
            if(arr[i] > arr[j]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to display array elements
template <typename T>
void displayArray(T arr[], int size) {
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Before sorting," << endl;
    displayArray(arr, size);

    sortArray(arr, size);

    cout << "After sorting," << endl;
    displayArray(arr, size);

    return 0;
}
