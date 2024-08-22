#include <bits/stdc++.h> 
#include <vector>

vector < int > termsOfAP(int x) {
    // Write your code here.
    vector<int> terms;
    
    int n = 1;

    while(terms.size()<x){
        int term = 3*n + 2;
        if(term % 4 != 0){
            terms.push_back(term);
        }
        n++;
    }
    return terms;
}
