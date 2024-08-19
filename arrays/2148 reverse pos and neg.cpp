#include <bits/stdc++.h> 

void posAndNeg(vector<int> &arr)
{
    // Write your code here.
    int pos = 0;
    int neg = 1;
    int n = arr.size();
    vector<int>ans(n);

    for(int i =0; i<n; i++){
        if(arr[i] < 0){
            ans[neg] = arr[i];
            neg +=2;
            

        }else{
            ans[pos] = arr[i];
            pos += 2;

        }
    }
    for (int i = 0; i < n; i++) {
        arr[i] = ans[i];
    }

    


}
