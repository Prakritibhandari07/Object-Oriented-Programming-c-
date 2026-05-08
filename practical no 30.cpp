#include <iostream>
using namespace std;

// Base class – Box
class Box {
protected:
    double width;
    double height;
    double depth;

public:
    // Constructor initializing dimensions
    Box(double w, double h, double d)
        : width(w), height(h), depth(d) {}

    // Default constructor
    Box() : width(0), height(0), depth(0) {}

    // Compute volume
    double getVolume() const {
        return width * height * depth;
    }
};

// Derived class – BoxWeight
class BoxWeight : public Box {
protected:
    double weight;

public:
    // Constructor initializing all attributes
    BoxWeight(double w, double h, double d, double m)
        : Box(w, h, d), weight(m) {}

    // Default constructor
    BoxWeight() : Box(), weight(0) {}

    // Display weight
    void getWeight() const {
        cout << "Weight: " << weight << " kg" << endl;
    }
};

// Further derived class – Shipment
class Shipment : public BoxWeight {
private:
    double cost;

public:
    // Constructor initializing everything
    Shipment(double w, double h, double d, double m, double c)
        : BoxWeight(w, h, d, m), cost(c) {}

    // Default constructor
    Shipment() : BoxWeight(), cost(0) {}

    // Display cost
    void getCost() const {
        cout << "Shipping cost: $" << cost << endl;
    }
};

int main() {
    // Create a Shipment object with all parameters
    Shipment myShipment(3.0, 4.0, 5.0, 10.0, 25.50);

    // Display volume, weight, and cost
    cout << "Shipment details:\n";
    cout << "Volume: " << myShipment.getVolume() << " cubic units\n";
    myShipment.getWeight();
    myShipment.getCost();

    return 0;
}
