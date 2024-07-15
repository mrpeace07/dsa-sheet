#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    q.push(13);
    q.push(16);
    q.push(11);
    q.push(12);

    cout << "Size of queue is: " << q.size() << endl;

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    // No need for extra q.pop() here

    if (q.empty()) {
        cout << "\nQueue is empty" << endl;
    } else {
        cout << "Queue is not empty";
    }

    return 0;
}
