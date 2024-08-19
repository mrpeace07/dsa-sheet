#include <bits/stdc++.h>
using namespace std;

void toh(int n, int a, int b, int c, int &count) {  // pass count by reference
    if (n == 1) {
        cout << "Move disc from " << a << " to " << c << endl;
        count++;  // increment the count
        return;
    }
    toh(n - 1, a, c, b, count);
    cout << "Move disc from " << a << " to " << c << endl;
    count++;  // increment the count
    toh(n - 1, b, a, c, count);
}

int main() {
    int n;
    cout << "Enter the number of discs: ";
    cin >> n;

    int count = 0;  // initialize count to 0
    
    int a = 1, b = 2, c = 3;
    toh(n, a, b, c, count);  // pass count by reference

    cout << "Total moves: " << count << endl;
    return 0;
}
