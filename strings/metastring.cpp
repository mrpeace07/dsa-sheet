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
