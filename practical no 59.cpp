#include <iostream>
using namespace std;

class Example {
private:
    int a;
    int b;

public:
    // Constructor using 'this' pointer
    Example(int a, int b) {
        // 'this->' differentiates between data members and parameters
        this->a = a;
        this->b = b;
    }

    // Member function that returns the current object using 'this'
    Example add(Example e) {
        Example temp(0, 0);
        temp.a = this->a + e.a;
        temp.b = this->b + e.b;
        return temp;
    }

    // Function to display values
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    Example obj1(10, 20);
    Example obj2(5, 15);

    cout << "Object 1: ";
    obj1.display();

    cout << "Object 2: ";
    obj2.display();

    Example obj3 = obj1.add(obj2);

    cout << "Sum (obj1 + obj2): ";
    obj3.display();

    return 0;
}

