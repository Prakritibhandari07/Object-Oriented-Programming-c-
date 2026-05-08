#include <iostream>
using namespace std;
int sumOfDigits(int n) {
    if (n == 0) 
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    long long n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    int result = sumOfDigits(n);
    cout << "Sum of digits = " << result << endl;
    return 0;
}

