class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int,int> u;
        for(auto x : nums)
        u[x]++;

        sort(nums.begin(),nums.end(), [ & ](int a, int b)
        {return u[a] != u[b] ? u[a] < u[b] : a > b ;
        });

        return nums;
        
    }
};

// class Solution {
// public:
//     std::vector<int> frequencySort(std::vector<int>& nums) {
//         std::unordered_map<int, int> frequencyMap;
        
//         // Step 1: Count the frequency of each element
//         for (int num : nums) {
//             frequencyMap[num]++;
//         }
        
//         // Step 2: Sort the vector based on frequency and value criteria using nested loops
//         for (size_t i = 0; i < nums.size(); ++i) {
//             for (size_t j = i + 1; j < nums.size(); ++j) {
//                 if (frequencyMap[nums[i]] > frequencyMap[nums[j]] ||
//                     (frequencyMap[nums[i]] == frequencyMap[nums[j]] && nums[i] < nums[j])) {
//                     std::swap(nums[i], nums[j]);
//                 }
//             }
//         }
        
//         return nums;
//     }
// };
