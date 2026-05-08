#include <iostream>
using namespace std;

class USMoney {
private:
    int dollars;
    int cents;
    void normalize() {
        if (cents >= 100) {
            dollars += cents / 100;
            cents = cents % 100;
        } else if (cents < 0) {
            int borrow = ( -cents + 99 ) / 100;
            dollars -= borrow;
            cents += borrow * 100;
        }
    }

public:
    USMoney(int d = 0, int c = 0) : dollars(d), cents(c) {
        normalize();
    }

       USMoney plus(const USMoney& other) const {
        USMoney result(dollars + other.dollars, cents + other.cents);
        return result;
    }
    void display() const {
        cout << "$" << dollars << ".";
        if (cents < 10) cout << "0";
        cout << cents;
    }
};

int main() {
    USMoney x(5, 80);  // $5.80
    USMoney y(1, 90);  // $1.90
    USMoney sum = x.plus(y);
    cout << "Sum: ";
    sum.display();
    cout << endl;

    return 0;
}
