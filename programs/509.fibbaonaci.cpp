// class Solution {
// public:
//     int fib(int n) {
//         // if( n == 0) return 0;
//         // if( n == 1) return 1;

//         // return fib(n-1) + fib(n-2);

// vector<int> dp(n+1);
// if ( n <= 1) return n;
// dp[0] = 0;
// dp[1] = 1;
// for(int i=2 ; i<dp.size(); i++){
//      dp[i]=  dp[i-1] + dp[i-2];
// }
// return dp[n];
//     }
// };

class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;
        
        int prev1 = 1, prev2 = 0, current;
        for (int i = 2; i <= n; ++i) {
            current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }
        return current;
    }
};
