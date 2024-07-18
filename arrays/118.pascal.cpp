// class Solution {
// public:
//     vector<vector<int>> generate(int n) {
//         vector<vector<int>> ans;

//         for (int i = 0; i < n; i++) {
//             vector<int> row(i + 1, 1);  // Initialize a row with 1s

//             for (int j = 1; j < i; j++) {
//                 row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
//             }

//             ans.push_back(row);
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {
            vector<int> row(i + 1);

            for (int j = 0; j <= i; j++) {
                if (i == j || j == 0) {
                    row[j] = 1;
                } else {
                    row[j] = ans[i-1][j-1] + ans[i-1][j];
                }
            }

            ans.push_back(row);
        }
        return ans;
    }
};
