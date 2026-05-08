#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;   
    int size;

public:
    DynamicArray(int n) : size(n) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = i + 1;  // simple initialization
        }
        cout << "Constructor: allocated array of size " << size << endl;
    }
    ~DynamicArray() {
        delete[] arr;
        cout << "Destructor: freed array of size " << size << endl;
    }

    void display() const {
        cout << "Array contents:";
        for (int i = 0; i < size; ++i) {
            cout << " " << arr[i];
        }
        cout << endl;
    }
};

int main() {
    DynamicArray dyn(5); 
    dyn.display();
    return 0;
}
