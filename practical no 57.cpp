#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function (can be overridden)
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Function overriding
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    // Function overriding
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal a;    // Base class object
    Dog d;       // Derived class object
    Cat c;       // Another derived class object

    Animal* ptr; // Base class pointer

    // Point to Animal
    ptr = &a;
    ptr->sound();  // Calls Animal's version

    // Point to Dog
    ptr = &d;
    ptr->sound();  // Calls Dog's overridden version

    // Point to Cat
    ptr = &c;
    ptr->sound();  // Calls Cat's overridden version

    return 0;
}









