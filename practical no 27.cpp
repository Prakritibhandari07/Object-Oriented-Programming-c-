//program to find area and volume of cube.

#include <iostream>
using namespace std;

class Box {
private:
    double width;
    double height;
    double depth;

public:
    Box() : width(0), height(0), depth(0) {}

    // Parameterized constructor
    Box(double w, double h, double d) : width(w), height(h), depth(d) {}

    // Compute total surface area: 2*(wh + wd + hd)
    double getArea() const {
        return 2 * (width * height + width * depth + height * depth);
    }

    // Compute volume: w*h*d
    double getVolume() const {
        return width * height * depth;
    }
};

int main() {
    // Create a Box object using the parameterized constructor
    Box myBox(3.0, 4.0, 5.0);

    // Compute and display surface area and volume
    cout << "Surface Area: " << myBox.getArea() << endl;
    cout << "Volume:       " << myBox.getVolume() << endl;

    return 0;
}
