#include <iostream>

using namespace std;

// Node class for each element in the stack
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Stack class
class Stack {
private:
    Node* top;  // Pointer to the top of the stack

public:
    Stack() {
        top = nullptr;  // Initialize an empty stack
    }

    // Function to push an element onto the stack
    void push(int data) {
        Node* new_node = new Node(data);  // Create a new node
        new_node->next = top;  // Set the new node's next to the current top
        top = new_node;  // Set the new node as the new top
    }

    // Function to pop an element from the stack
    int pop() {
        if (is_empty()) {
            cerr << "Error: Stack underflow\n";
            exit(EXIT_FAILURE);
        }
        Node* temp = top;  // Temporarily store the current top
        int popped = temp->data;  // Get the data from the top node
        top = top->next;  // Move top to the next node
        delete temp;  // Free memory of the popped node
        return popped;  // Return the popped data
    }

    // Function to peek at the top element of the stack
    int peek() {
        if (is_empty()) {
            cerr << "Error: Stack is empty\n";
            exit(EXIT_FAILURE);
        }
        return top->data;  // Return the data of the top node
    }

    // Function to check if the stack is empty
    bool is_empty() {
        return top == nullptr;  // Stack is empty if top is nullptr
    }

    ~Stack() {
        while (!is_empty()) {
            pop();  // Free all memory when stack is destroyed
        }
    }
};

// Main function to test the stack implementation
int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top element: " << stack.peek() << endl;

    cout << "Popping elements:\n";
    while (!stack.is_empty()) {
        cout << stack.pop() << endl;
    }

    return 0;
}
