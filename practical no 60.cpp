#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    double result;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            // Throw an exception if denominator is zero
            throw runtime_error("Error: Division by zero is not allowed!");
        }

        result = static_cast<double>(numerator) / denominator;
        cout << "Result = " << result << endl;
    }
    catch (runtime_error &e) {
        // Catch and handle the exception
        cout << e.what() << endl;
    }

    cout << "Program continues after exception handling." << endl;

    return 0;
}

