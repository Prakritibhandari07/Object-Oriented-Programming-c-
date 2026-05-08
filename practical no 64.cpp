#include <iostream>
using namespace std;

// Template class for Stack
template <class T>
class Stack {
private:
    T arr[10];     // Fixed size stack
    int top;       // Index of top element

public:
    // Constructor
    Stack() {
        top = -1;
    }

    // Function to push element onto stack
    void push(T item) {
        if (top >= 9) {
            cout << "Stack Overflow! Cannot push " << item << endl;
        } else {
            arr[++top] = item;
            cout << item << " pushed to stack." << endl;
        }
    }

    // Function to pop element from stack
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow! No elements to pop." << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }

    // Function to display stack contents
    void display() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    // Stack of integers
    Stack<int> intStack;

    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.display();

    intStack.pop();
    intStack.display();

    cout << "\n";

    // Stack of strings
    Stack<string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");
    stringStack.display();

    stringStack.pop();
    stringStack.display();

    return 0;
}
