class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // for(int i=0; i<nums.size();i++)
        // {
        //     for(int j=i+1; j<nums.size(); j++)
        //     {
        //         if(nums[i]+nums[j] == target)
        //         return {i,j};
        //     }
        // }
        // return {};

        unordered_map<int, int> mpp;

        for(int i=0; i<nums.size();i++){
            int a = nums[i];
            int b = target - a;

            if(mpp.find(b) != mpp.end()) return{ mpp[b], i};
            mpp[a] = i;
        }
        return {};
    }

//     vector<int> twoSum(vector<int>& nums, int target) { for sorted array only
//     int i = 0;
//     int j = nums.size() - 1;

//     while (i < j) {
//         int sum = nums[i] + nums[j];
//         if (sum > target) {
//             j--;
//         } else if (sum < target) {
//             i++;
//         } else {
//             return {i, j};
//         }
//     }
//     return {};
// }

};
