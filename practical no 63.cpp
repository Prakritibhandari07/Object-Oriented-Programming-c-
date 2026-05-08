#include <iostream>
using namespace std;

// Template function for sorting (using simple bubble sort)
template <class T>
void sortArray(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Template function to display array
template <class T>
void display(T arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    const int size = 10;
    int arr[size];

    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "\nBefore sorting: ";
    display(arr, size);

    sortArray(arr, size);

    cout << "After sorting: ";
    display(arr, size);

    return 0;
}

