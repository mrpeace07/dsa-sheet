class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // if (nums.size() <= 2) return nums.size(); // If the array has 2 or fewer elements, no need to process

        // int j = 1; // Start j from 1, as the first element is always included
        // int count = 1; // Count for the first element

        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] == nums[i - 1]) {
        //         count++;
        //     } else {
        //         count = 1; // Reset count for a new element
        //     }

        //     if (count <= 2) {
        //         nums[j] = nums[i];
        //         j++;
        //     }
        // }
        // return j;
int count =0;
for(int i=0; i<nums.size();i++){
    
    if(count <2 || nums[i] > nums[count-2]){
        nums[count++] = nums[i];
    } 
}
return count;
    }
};

// int removeDuplicates(vector<int>& nums) {
//     int i = 0;
//     for (int n : nums)
//         if (i < 2 || n > nums[i-2])
//             nums[i++] = n;
//     return i;
// }
