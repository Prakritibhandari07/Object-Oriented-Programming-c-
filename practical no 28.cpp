//Program to find area and volume of room.

#include <iostream>
using namespace std;

// Base class: Room with length and breadth
class Room {
protected:
    double length;
    double breadth;

public:
    // Default constructor
    Room(double l = 0, double b = 0) : length(l), breadth(b) {}

    // Area calculation
    double getArea() const {
        return length * breadth;
    }
};

// Derived class: MyRoom extends Room and adds height
class MyRoom : public Room {
private:
    double height;

public:
    // Constructor: initializes length, breadth (via base), and height
    MyRoom(double l, double b, double h) : Room(l, b), height(h) {}

    // Volume calculation
    double getVolume() const {
        return getArea() * height;
    }

    // Utility to display details
    void display() const {
        cout << "Room (L×B×H): " << length
             << " × " << breadth
             << " × " << height << "\n";
        cout << "Area: " << getArea() << "\n";
        cout << "Volume: " << getVolume() << "\n";
    }
};

int main() {
    // Create two MyRoom objects
    MyRoom room1(3.5, 4.2, 2.8);  // dimensions in meters
    MyRoom room2(5.0, 3.0, 3.5);

    cout << "Room 1 details:\n";
    room1.display();

    cout << "\nRoom 2 details:\n";
    room2.display();

    return 0;
}

