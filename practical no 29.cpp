#include <iostream>
using namespace std;


class Shape {
public:
    virtual double getArea() const = 0;  
    virtual ~Shape() = default;          
};

class Rectangle : public Shape {
private:
    double length;
    double breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}

    double getArea() const override {
        return length * breadth;
    }
};


class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double getArea() const override {
        return 0.5 * base * height;
    }
};

int main() {
    
    Rectangle rect(5.0, 4.0);     
    Triangle tri(3.0, 6.0);       
    cout << "Area of Rectangle: " << rect.getArea() << endl;
    cout << "Area of Triangle:  " << tri.getArea() << endl;

    return 0;
}
