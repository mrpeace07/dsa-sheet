#include <bits/stdc++.h>
using namespace std;

class Queue {
    stack<int> s;

public:
    void enqueue(int x) {
        s.push(x);
    }

    int dequeue() {
        if (s.empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int x = s.top();
        s.pop();
        if (s.empty()) {
            return x;
        }
        int item = dequeue();
        s.push(x);
        return item;
    }

    bool isempty() {
        return s.empty();
    }

    // int top() { //not needed dequeue performas the same opeeration
    //     if (s.empty()) {
    //         cout << "Queue is empty" << endl;
    //         return -1;
    //     }
    //     int x = s.top();
    //     s.pop();
    //     if (s.empty()) {
    //         s.push(x); // Put the element back
    //         return x;
    //     }
    //     int item = top();
    //     s.push(x); // Put the element back
    //     return item;
    // }
};

int main() {
    Queue q;
    q.enqueue(2);
    q.enqueue(23);
    q.enqueue(12);
    q.enqueue(21);

    cout << q.dequeue() << " "; // Should print 2
    cout << q.dequeue() << " "; // Should print 23
    cout << q.dequeue() << " "; // Should print 12
    cout << q.dequeue() << " "; // Should print 21

    if (q.isempty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}
