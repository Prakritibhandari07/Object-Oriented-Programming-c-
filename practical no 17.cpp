#include <iostream>
using namespace std;
double power(double m, int n = 2);
double power(double m, int n) {
    double result = 1.0;
    bool isNegative = (n < 0);
    int exponent = isNegative ? -n : n;

    for (int i = 0; i < exponent; ++i) {
        result *= m;
    }

    return isNegative ? (1.0 / result) : result;
}

int main() {
    double m;
    int n;
    char choice;

    cout << "Enter the base (double m): ";
    cin >> m;

    cout << "Do you want to enter an exponent? (y/n): ";
    cin >> choice;

    double result;
    if (choice == 'y' || choice == 'Y') {
        cout << "Enter exponent (int n): ";
        cin >> n;
        result = power(m, n);
        cout << m << " raised to the power " << n << " is " << result << endl;
    } else {
        result = power(m);  
        cout << m << " squared (power 2) is " << result << endl;
    }

    return 0;
}

