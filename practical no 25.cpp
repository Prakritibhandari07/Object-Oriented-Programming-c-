//Program to calculate the total distance travelled.

#include <iostream>
using namespace std;

class DB;  // Forward declaration

class DM {
    int m;
    double cm;

public:
    void input() {
        cout << "Enter distance in meters and centimeters: ";
        cin >> m >> cm;
    }
    void show() const {
        cout << m << " m & " << cm << " cm\n";
    }
    int getMeters() const { return m; }
    double getCentimeters() const { return cm; }

    friend DM add(const DM&, const DB&);
};

class DB {
    int ft;
    double in;

public:
    DB() : ft(0), in(0.0) {}

    void input() {
        cout << "Enter distance in feet and inches: ";
        cin >> ft >> in;
    }
    void show() const {
        cout << ft << " ft & " << in << " in\n";
    }

    friend DM add(const DM&, const DB&);
};

DM add(const DM& dm, const DB& db) {
    DM result;
    double total_cm = dm.m * 100.0 + dm.cm;              // DM to cm
    double total_in = db.ft * 12.0 + db.in;              // DB to inches
    total_cm += total_in * 2.54;                         // Convert inches to cm and add

    result.m = static_cast<int>(total_cm / 100);
    result.cm = total_cm - (result.m * 100);
    return result;
}

int main() {
    DM dm;
    DB db;

    dm.input();
    db.input();

    DM sum = add(dm, db);

    cout << "\nSum (in metric): ";
    sum.show();

    return 0;
}
