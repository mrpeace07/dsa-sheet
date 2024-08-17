class Solution {
public:
    // int findMin(vector<int>& nums) {
    //     // Initialize the minimum with the first element
    //     int mini = nums[0];

    //     // Loop through the entire array using a standard for loop
    //     for (int i = 1; i < nums.size(); i++) {
    //         // Update the minimum if a smaller element is found
    //         mini = min(mini, nums[i]);
    //     }

    //     return mini; // Return the minimum element found
    // }

    int findMin(vector<int>& nums) {
        int l = 0;
        int h = nums.size() - 1;

        while (l < h) {
            int m = l + (h - l) / 2;
            
            // If the mid element is greater than the high element, the minimum is in the right half
            if (nums[m] > nums[h]) {
                l = m + 1;
            } else {
                // Otherwise, the minimum is in the left half (including the mid)
                h = m;
            }
        }
        
        // At the end of the loop, l == h and points to the smallest element
        return nums[l];
    }
};
