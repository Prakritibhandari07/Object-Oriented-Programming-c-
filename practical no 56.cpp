#include <iostream>
using namespace std;

class A {
private:
    int x, y;

public:
    // Constructor
    A(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    // Getter functions
    int getX() const { return x; }
    int getY() const { return y; }

    // Display function
    void display() const {
        cout << "Class A: x = " << x << ", y = " << y << endl;
    }
};

class B {
private:
    int m, n;

public:
    // Default constructor
    B() {
        m = 0;
        n = 0;
    }

    // Conversion routine: takes an object of class A as argument
    B(A a) {
        m = a.getX();
        n = a.getY();
    }

    // Display function
    void display() const {
        cout << "Class B: m = " << m << ", n = " << n << endl;
    }
};

int main() {
    A a1(10, 20);
    cout << "Source Object (Class A):" << endl;
    a1.display();

    // Conversion from A ? B using destination class constructor
    B b1 = a1;

    cout << "\nConverted Object (Class B):" << endl;
    b1.display();

    return 0;
}

