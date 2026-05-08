#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    // Constructor to initialize string
    MyString(string s = "") {
        str = s;
    }

    // Friend function to overload '+' operator
    friend MyString operator+(MyString s1, MyString s2);

    // Function to display the string
    void display() const {
        cout << str << endl;
    }
};

// Definition of friend function
MyString operator+(MyString s1, MyString s2) {
    MyString temp;
    temp.str = s1.str + s2.str;  // concatenate strings
    return temp;
}

int main() {
    MyString s1("Hello ");
    MyString s2("World!");

    cout << "First String: ";
    s1.display();

    cout << "Second String: ";
    s2.display();

    // Using overloaded '+' operator
    MyString s3 = s1 + s2;

    cout << "Concatenated String: ";
    s3.display();

    return 0;
}
