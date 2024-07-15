#include <bits/stdc++.h>
using namespace std;

class Stack {
    queue<int> q1, q2;

public:
    void push(int x) {
        q1.push(x);
    }

    void pop() {
        if (q1.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        // Move all elements except the last one from q1 to q2
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        // Pop the last element from q1
        q1.pop();
        // Swap q1 and q2
        swap(q1, q2);
    }

    int top() {
        if (q1.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        // Move all elements except the last one from q1 to q2
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        // Get the last element from q1
        int val = q1.front();
        q2.push(val);
        q1.pop();
        // Swap q1 and q2
        swap(q1, q2);
        return val;
    }

    bool isempty() {
        return q1.empty();
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // Should print 30
    s.pop(); // Removes 30

    cout << "Top element: " << s.top() << endl; // Should print 20
    s.pop(); // Removes 20

    cout << "Top element: " << s.top() << endl; // Should print 10
    s.pop(); // Removes 10

    if (s.isempty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}
