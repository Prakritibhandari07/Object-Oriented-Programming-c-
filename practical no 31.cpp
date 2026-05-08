#include <iostream>
#include <string>
using namespace std;

// Base class: Lecture
class Lecture {
protected:
    int id;
    string name;

public:
    // Reads the ID and name from the keyboard
    virtual void readdata() {
        cout << "Enter lecture ID: ";
        cin >> id;
        cout << "Enter lecture name: ";
        getline (cin,name);
        cout << endl;
    }

    // Displays the lecture details
    virtual void printdata() const {
        cout << "Lecture ID: " << id << "\n";
        cout << "Lecture Name: " << name << "\n";
    }

    virtual ~Lecture() = default; 
};

// Derived class: PartTime
class PartTime : public Lecture {
private:
    float payPerHr;

public:
    void readdata() override {
        Lecture::readdata(); // reuse base class input
        cout << "Enter pay per hour: ";
        cin >> payPerHr;
    }

    void printdata() const override {
        Lecture::printdata(); // reuse base class output
        cout << "Pay per Hour: " << payPerHr << "\n";
    }
};

// Derived class: FullTime
class FullTime : public Lecture {
private:
    float payPerMonth;

public:
    void readdata() override {
        Lecture::readdata();
        cout << "Enter pay per month: ";
        cin >> payPerMonth;
    }

    void printdata() const override {
        Lecture::printdata();
        cout << "Pay per Month: " << payPerMonth << "\n";
    }
};

int main() {
    cout << "=== Part-Time Lecture ===\n";
    PartTime pt;
    pt.readdata();
    cout << "\nYou entered:\n";
    pt.printdata();

    cout << "\n=== Full-Time Lecture ===\n";
    FullTime ft;
    ft.readdata();
    cout << "\nYou entered:\n";
    ft.printdata();

    return 0;
}
