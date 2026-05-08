#include <iostream>
using namespace std;
void zeroSmaller(int &x, int &y)
 {
    if (x < y)
        x = 0;
    else
        y = 0;
}

int main()
 {
    int a, b;
    cout << "Enter two integers separated by space: ";
    cin >> a >> b;

    cout << "\nBefore zeroSmaller(): a = " << a << ", b = " << b << endl;

    zeroSmaller(a, b);

    cout << "After zeroSmaller():  a = " << a << ", b = " << b << endl;

    return 0;
}
