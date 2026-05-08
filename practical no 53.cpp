#include <iostream>
using namespace std;

class Time {
private:
    int hr, min, sec;

public:
    // Constructor to initialize time
    Time(int h = 0, int m = 0, int s = 0) {
        hr = h;
        min = m;
        sec = s;
    }

    // Friend function to overload '+' operator
    friend Time operator+(Time t1, Time t2);

    // Function to display time
    void display() const {
        cout << hr << " hr " << min << " min " << sec << " sec" << endl;
    }
};

// Definition of friend function
Time operator+(Time t1, Time t2) {
    Time temp;
    temp.sec = t1.sec + t2.sec;
    temp.min = t1.min + t2.min + (temp.sec / 60);
    temp.sec %= 60;
    temp.hr = t1.hr + t2.hr + (temp.min / 60);
    temp.min %= 60;
    return temp;
}

int main() {
    Time t1(2, 45, 50);
    Time t2(1, 20, 30);

    cout << "First Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    Time t3 = t1 + t2;  // using overloaded + operator

    cout << "Sum of Times: ";
    t3.display();

    return 0;
}
