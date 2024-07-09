// class Solution { nlog n 0(1)
// public:
//     int majorityElement(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         return nums[n/2];
//     }
// };

// class Solution { o(n) 0(n)
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         unordered_map<int, int> m;
        
//         for(int i = 0; i < n; i++){
//             m[nums[i]]++;
//         }
//         n = n/2;
//         for(auto x: m){
//             if(x.second > n){
//                 return x.first;
//             }
//         }
//         return 0;
//     }
// };

class Solution { //o(n) 0(1) moore vooting algorithm
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;
        
        for (int num : nums) { //int i=0; i<nums.size;i++
            if (count == 0) { 
                candidate = num;  //candidate = nums[i]
            }
            
            if (num == candidate) { //nums[i] == candidate
                count++;
            } else {
                count--;
            }
        }
        
        return candidate;
    }
};
