// class Solution {
// public:
//     int reverse(int x) {
//         int ans = 0;
//         while(x != 0){
//             int rem = x % 10;
//             if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
//                 return 0; // Return 0 if reversing x would cause overflow/underflow
//             }
//             ans = ans *10 + rem;
//             x = x / 10;
//         }
//         return ans;
        
//     }
// };

class Solution {
public:
    int reverse(int x) {
        long reverse = 0;  // Use long to prevent overflow during reversal
        int original = x;  // Save the original value for handling negative numbers
        
        while (x != 0) {
            int last_digit = x % 10;
            reverse = reverse * 10 + last_digit;
            x /= 10;

            // Check for overflow: Return 0 if it happens
            if (reverse > INT_MAX || reverse < INT_MIN) {
                return 0;
            }
        }
        
        return static_cast<int>(reverse);
    }
};
