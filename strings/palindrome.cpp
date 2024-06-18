#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int n = str.length();
    int i = 0;
    int j = n - 1;

    while (i < j) {
        if (str[i] != str[n - 1 - i]) {
            cout << "it is not a palindrome" << endl;
            return 0;
        }
        i++;
        j--;
    }

    cout << "it is a palindrome" << endl;
    return 0;
}
