#include <iostream>
using namespace std;

// Forward declaration of class B
class B;

class A {
private:
    int x, y;

public:
    // Constructor
    A(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    // Display function
    void display() const {
        cout << "Class A: x = " << x << ", y = " << y << endl;
    }

    // Conversion routine: A ? B
    operator B();
};

class B {
private:
    int m, n;

public:
    // Constructor
    B(int i = 0, int j = 0) {
        m = i;
        n = j;
    }

    // Display function
    void display() const {
        cout << "Class B: m = " << m << ", n = " << n << endl;
    }

    // Grant access to class A’s conversion routine
    friend class A;
};

// Conversion function defined outside class A
A::operator B() {
    B temp;
    temp.m = x;      // Copying or converting data
    temp.n = y;
    return temp;
}

int main() {
    A a1(10, 20);
    B b1;

    cout << "Before conversion:" << endl;
    a1.display();

    // Conversion from A to B using conversion routine in A
    b1 = a1;

    cout << "\nAfter conversion:" << endl;
    b1.display();

    return 0;
}

