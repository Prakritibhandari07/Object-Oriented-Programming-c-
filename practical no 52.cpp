#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance() : feet(0), inches(0) { }
    Distance(int f, int i) : feet(f), inches(i) { }

    void display() const {
        cout << feet << " ft " << inches << " in" << endl;
    }
    friend Distance operator-(const Distance& d1, const Distance& d2);
};
Distance operator-(const Distance& d1, const Distance& d2) {
    Distance result;
    result.feet = d1.feet - d2.feet;
    result.inches = d1.inches - d2.inches;
    if (result.inches >= 12) {
        result.feet -= result.inches / 12;
        result.inches %= 12;
    }

    return result;
}

int main() {
    Distance d1(5, 9);
    Distance d2(3, 8);

    Distance difference = d1 - d2;
    cout << "difference of distances: ";
    difference.display();  // Expected: 9 ft 5 in
 return 0;
}

