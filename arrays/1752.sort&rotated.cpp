class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        // Check for the number of decreasing points
        for (int i = 0; i < n; ++i) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        // The array can be a sorted rotated array if there is at most one place where nums[i] > nums[i+1]
        return count <= 1;
    }
};
