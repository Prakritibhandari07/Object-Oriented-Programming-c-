#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void area() {
        cout << "Calculating area of generic shape" << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void area() override {
        cout << "Area of Circle = p * r²" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void area() override {
        cout << "Area of Rectangle = length * breadth" << endl;
    }
};

int main() {
    Shape s;           // Base class object
    Circle c;          // Derived class object
    Rectangle r;       // Derived class object

    Shape* ptr;        // Base class pointer

    // Point to Shape
    ptr = &s;
    ptr->area();       // Calls Shape’s version

    // Point to Circle
    ptr = &c;
    ptr->area();       // Calls Circle’s overridden version

    // Point to Rectangle
    ptr = &r;
    ptr->area();       // Calls Rectangle’s overridden version

    return 0;
}







