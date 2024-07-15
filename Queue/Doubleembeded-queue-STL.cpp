#include<bits/stdc++.h>
using namespace std;

int main(){
    deque <int> d;

    d.push_front(12);
    d.push_back(14);

    cout << d.front() << endl;
    cout << d.back();

    d.pop_front();
}

/*Notes:
Double-Ended Queue (deque): Unlike a regular queue (queue), a deque allows insertion and deletion at both ends (push_front, push_back, pop_front, pop_back), making it versatile for certain types of problems.

Efficiency: Operations like push_front, pop_front, front, and back are generally O(1) in complexity, making deque suitable for scenarios where both ends of the data structure need to be accessed or modified efficiently.

Standard Library Inclusion: While #include<bits/stdc++.h> is convenient, it's better practice to include only the specific headers needed (#include <iostream>, #include <deque>, etc.) to minimize compilation time and avoid potential issues with conflicting definitions.*/