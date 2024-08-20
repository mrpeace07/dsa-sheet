// class Solution {
// public:
//     void markrow(vector<vector<int>>& matrix, int i) {
//     //     int n = matrix[0].size();  // Number of columns
//     //     for(int j = 0; j < n; j++) {
//     //         if(matrix[i][j] != 0) {
//     //             matrix[i][j] = -1;
//     //         }
//     //     }
//     // }
 
//     // void markcol(vector<vector<int>>& matrix, int j) {
//     //     int m = matrix.size();  // Number of rows
//     //     for(int i = 0; i < m; i++) {
//     //         if(matrix[i][j] != 0) {
//     //             matrix[i][j] = -1;
//     //         }
//     //     }
//     // }

//     // void setZeroes(vector<vector<int>>& matrix) {
//     //     int m = matrix.size();    // Number of rows
//     //     int n = matrix[0].size(); // Number of columns
        
//     //     for(int i = 0; i < m; i++) {
//     //         for(int j = 0; j < n; j++) {
//     //             if(matrix[i][j] == 0) {
//     //                 markrow(matrix, i);
//     //                 markcol(matrix, j);
//     //             }
//     //         }
//     //     }

//     //     // Convert all -1 marks to 0
//     //     for(int i = 0; i < m; i++) {
//     //         for(int j = 0; j < n; j++) {
//     //             if(matrix[i][j] == -1) {
//     //                 matrix[i][j] = 0;
//     //             }
//     //         }
//     //     }
//     // }//n3 so not optimal


   class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();    // Number of rows
        int n = matrix[0].size(); // Number of columns
        
        vector<int> col(n, 0);
        vector<int> row(m, 0);

        // Mark the rows and columns that need to be set to zero
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    col[j] = 1;
                    row[i] = 1;
                } 
            }
        }

        // Set the marked rows and columns to zero
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (col[j] == 1 || row[i] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
