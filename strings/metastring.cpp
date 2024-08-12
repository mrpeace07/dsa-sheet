#include <bits/stdc++.h> 
bool checkMeta(string &str1, string &str2)
{
    // Write your code here.
    if(str1.length() != str2.length()) return false;

    vector<int> diff;
    for(int i=0; i<str2.length();i++){
        if(str1[i] != str2[i]) diff.push_back(i);
    }

    if(diff.size() != 2) return false;

    swap(str1[diff[0]],str1[diff[1]]);
    return str1 == str2;
}


// Problem statement
// You are given two strings 'STR1' and 'STR2'. You need to tell whether the strings are meta strings or not.

// Meta strings are strings that can be made equal by swapping exactly one pair of distinct characters in one of the strings.

// Note:
// Equal strings are not considered as meta strings. 
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 2 <= length of STR1<= 10 ^ 5
// 2 <= length of STR2 <= 10 ^ 5
// Sample Input 1:
// 2
// Coding
// Codnig
// Ninjas
// Niaxns
// Sample Output 1:
// YES
// NO
// Explanation for Input 1:
// For test case 1: By swapping ‘i’ and ‘n’ in the second string, it becomes equal to the first string.

// For test case 2: There is no way we can make both the strings equals by swapping one pair of characters.
// Sample Input 2:
// 3
// Hello
// Hello
// Play
// Playes
// Seek
// Seke
// Sample Output 2:
// NO
// NO
// YES
