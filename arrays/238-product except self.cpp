class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    //      vector<int> product(nums.size());

    //     for (int j = 0; j < nums.size(); j++) {
    //         long long int ans = 1; // Initialize product for current index j

    //         for (int i = 0; i < nums.size(); i++) {
    //             if (i != j) {
    //                 ans *= nums[i]; // Multiply all elements except the current one
    //             }
    //         }

    //         product[j] = ans; // Store the result in the product array
    //     }

    //     return product;
    // } brute
    
    int n = nums.size();
        vector<int> ans(n, 1); // Initialize result vector with 1

        // Handle edge cases
        if (n == 0) return {}; // No elements
        if (n == 1) return {0}; // Single element, product except itself is 0

        // Compute left products
        int leftProduct = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = leftProduct; // Store the product of all elements to the left of i
            leftProduct *= nums[i]; // Update leftProduct for next iteration
        }

        // Compute right products and multiply with left products
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= rightProduct; // Multiply by the product of all elements to the right of i
            rightProduct *= nums[i]; // Update rightProduct for next iteration
        }

        return ans;
    }
    
    
};
