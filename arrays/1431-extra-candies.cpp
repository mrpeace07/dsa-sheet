class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> newCandies(candies);
        sort(newCandies.begin(),newCandies.end());
        int largestInt = newCandies[newCandies.size()-1];
        vector<bool> newVec;
        for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies>=largestInt){
                newVec.push_back(true);
            } else{
                newVec.push_back(false);
            }
        }
        return newVec;
    }
};

// class Solution {
// public:
//     vector<bool> kidsWithCandies(vector<int>& a, int k) {
//         int n = a.size();
//         int max = INT_MIN;
//         for(int i = 0; i < n; i++) {
//             if(a[i] > max) {
//                 max = a[i];
//             }
//         }

//         vector<bool> result(n);
//         for(int i = 0; i < n; i++) {
//             if (a[i] + k >= max) {
//                 result[i] = true;
//             } else {
//                 result[i] = false;
//             }
//         }

//         return result;
//     }
// };

// class Solution {
// public:
//     vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
//         // Find out the greatest number of candies among all the kids.
//         int maxCandies = 0;
//         for (int candy : candies) {
//             maxCandies = max(maxCandies, candy);
//         }
//         // For each kid, check if they will have greatest number of candies
//         // among all the kids.
//         vector<bool> result;
//         for (int candy : candies) {
//             result.push_back(candy + extraCandies >= maxCandies);
//         }

//         return result;
//     }
// };

