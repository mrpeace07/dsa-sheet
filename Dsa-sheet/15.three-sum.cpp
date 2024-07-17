class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
    //     vector<vector<int>> result; // without using set data structure
    //     int n = nums.size();
        
    //     for (int i = 0; i < n - 2; ++i) {
    //         for (int j = i + 1; j < n - 1; ++j) {
    //             for (int k = j + 1; k < n; ++k) {
    //                 if (nums[i] + nums[j] + nums[k] == 0) {
    //                     // Sort the triplet to avoid duplicates
    //                     vector<int> triplet = {nums[i], nums[j], nums[k]};
    //                     sort(triplet.begin(), triplet.end());
                        
    //                     // Check if the triplet is already in the result
    //                     if (find(result.begin(), result.end(), triplet) == result.end()) {
    //                         result.push_back(triplet);
    //                     }
    //                 }
    //             }
    //         }
    //     }
        
    //     return result;
    // }

// set <vector<int>> st;

//     for(int i=0; i < nums.size() ; i++){
//         for(int j=i+1; j< nums.size(); j++) {
//             for( int k=j+1; k<nums.size(); k++){
//                 if ( nums[i]+ nums[j] + nums[k] == 0 ){
//                     vector<int> temp = { nums[i], nums[j], nums[k]};
//                     sort(temp.begin(), temp.end());

//                     st.insert(temp);
//                 }
//             }
//         }
//     }
//       vector<vector<int>> ans(st.begin(),st.end());
//       return ans;



// set <vector<int>> st;
//         for (int i = 0; i < nums.size(); ++i) {
//             set<int> hashset; // Hash set to store unique values
//             for (int j = i + 1; j < nums.size(); ++j) {
//                 int third = -(nums[i] + nums[j]);

//                 // Check if third value exists in hashset to avoid duplicates
//                 if (hashset.find(third) != hashset.end()) {
//                     vector<int> triplet = {nums[i], nums[j], third};
//                     sort(triplet.begin(), triplet.end());
//                     st.insert(triplet);
//                 }

//                 hashset.insert(nums[j]); // Add nums[j] to hashset
//             }
//         }

//         // Convert set to vector of vectors
//         vector<vector<int>> ans(st.begin(), st.end());
//         return ans;
  
  
  vector<vector<int>> ans;

  sort(nums.begin(), nums.end()); // Sort the array

    for (int i = 0; i < nums.size(); ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates for i

        int j = i + 1;
        int k = nums.size() - 1;

        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];

            if (sum > 0) {
                k--; // Decrement k to reduce the sum
            } else if (sum < 0) {
                j++; // Increment j to increase the sum
            } else {
                ans.push_back({nums[i], nums[j], nums[k]});

                // Skip duplicates for j
                while (j < k && nums[j] == nums[j + 1]) j++;
                // Skip duplicates for k
                while (j < k && nums[k] == nums[k - 1]) k--;

             j++;
                k--;
            }
        }
    }

    return ans;
    }
};
