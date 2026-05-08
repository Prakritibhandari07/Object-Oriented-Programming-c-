#include <iostream>
#include <stdexcept>   // for runtime_error
using namespace std;

int main() {
    try {
        int choice;
        cout << "Choose an exception to throw:" << endl;
        cout << "1. Integer exception" << endl;
        cout << "2. Character exception" << endl;
        cout << "3. Runtime error" << endl;
        cout << "4. Unknown exception" << endl;
        cout << "Enter choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                throw 10;                     // int type exception
            case 2:
                throw 'X';                    // char type exception
            case 3:
                throw runtime_error("A runtime error occurred!"); // standard exception
            case 4:
                throw 3.14;                   // double type — not specifically caught
            default:
                cout << "No exception thrown!" << endl;
        }
    }
    catch (int e) {
        cout << "Caught an integer exception: " << e << endl;
    }
    catch (char e) {
        cout << "Caught a character exception: " << e << endl;
    }
    catch (runtime_error &e) {
        cout << "Caught a runtime_error exception: " << e.what() << endl;
    }
    catch (...) {
        cout << "Caught an unknown exception!" << endl;
    }

    cout << "Program continues after exception handling." << endl;

    return 0;
}

