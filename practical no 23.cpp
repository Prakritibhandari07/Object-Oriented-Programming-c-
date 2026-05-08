#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0f) { }

    void getDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void showDistance() const {
        cout << feet << "'-" << inches << "\"" << endl;
    }

    void add_dist(const Distance& d) {
        feet += d.feet;
        inches += d.inches;
        if (inches >= 12.0f) {
            inches -= 12.0f;
            feet++;
        }
    }

    void div_dist(int divisor) {
        int totalInches = feet * 12 + static_cast<int>(inches + 0.5f);
        totalInches /= divisor;
        feet = totalInches / 12;
        inches = totalInches % 12;
    }
};

int main() {
    const int MAX = 100;
    Distance distArr[MAX];
    Distance total;
    int count = 0;
    char choice;

    do {
        cout << "\nEnter distance #" << (count + 1) << ":\n";
        distArr[count].getDistance();
        total.add_dist(distArr[count]);
        count++;
        if (count >= MAX) {
            cout << "Reached the maximum of " << MAX << " entries.\n";
            break;
        }
        cout << "Add another distance? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    if (count == 0) {
        cout << "\nNo distances entered. Exiting.\n";
    } else {
        Distance average = total;
        average.div_dist(count);
        cout << "\nAverage distance of " << count << " entries is: ";
        average.showDistance();
    }
    return 0;
}

