#include <bits/stdc++.h>
using namespace std;

class Stack {
    queue<int> q1, q2;

public:
    void push(int x) {
        // Push x to q2
        q2.push(x);

        // Push all elements of q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Swap the names of q1 and q2
        swap(q1, q2);
    }

    int pop() {
        if (q1.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int val = q1.front();
        q1.pop();
        return val;
    }

    int top() {
        if (q1.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return q1.front();
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

    cout << s.pop() << " "; // Should print 30
    cout << s.pop() << " "; // Should print 20
    cout << s.pop() << " "; // Should print 10

    if (s.isempty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}
