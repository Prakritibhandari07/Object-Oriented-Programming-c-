//Program to find the largest number.

#include<iostream>
using namespace std;
class Number
{
	private:
		int x, y;  

public:
    
    Number(int x_val, int y_val) : x(x_val), y(y_val) { }
    int getMax() const {
        return (x > y) ? x : y;
    }
};

int main() {
    Number num(15, 27);
    cout << "The larger number is: " << num.getMax() << endl;

    return 0;
}
