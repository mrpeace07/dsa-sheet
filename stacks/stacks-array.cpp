#include <iostream>
using namespace std;

class Stack {
public:
    int *arr;
    int top;
    int capacity;

public:
    // Constructor to initialize the stack
    Stack(int size) {
        capacity = size;
        arr = new int[size];
        top = -1;
    }

    // // Destructor to free the allocated memory
    // ~Stack() {
    //     delete[] arr;
    // } best practise;

    // Method to add an element to the stack
    void push(int value) {
        if (top >= capacity - 1) {
            cout << "Stack overflow" << endl;
        } else {
            arr[++top] = value;
        }
    }

    // Method to remove the top element from the stack
    void pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
        } else {
            top--;
        }
    }

    // Method to return the top element of the stack
    int peek() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
            return -1; // Return an invalid value
        } else {
            return arr[top];
        }
    }

    // Method to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s(5);
    s.push(20);
    s.push(10);
    s.push(30);

    cout << "Top element is: " << s.peek() << endl;

    // Print all elements in the stack
    cout << "Stack elements: ";
    for (int i = s.top; i >= 0; i--) {
        cout << s.arr[i] << " ";
    }
    cout << endl;

    s.pop();
    cout << "Top element after popping is: " << s.peek() << endl;

    // Print all elements in the stack after popping
    cout << "Stack elements: ";
    for (int i = s.top; i >= 0; i--) {
        cout << s.arr[i] << " ";
    }
    cout << endl;

    s.pop();
    s.pop();
    s.pop(); // This should trigger stack underflow

    return 0;
}
