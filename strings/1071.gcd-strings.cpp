class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // Check if concatenation of the two strings in both orders is the same
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        // Find the greatest common divisor of the lengths of the two strings
        int gcdLength = gcd(str1.size(), str2.size());
        // Return the substring from the beginning of str1 up to the gcd length
        return str1.substr(0, gcdLength);
    }
};

// class Solution {
// public:
//     string gcdOfStrings(string str1, string str2) {
//         // Check if concatenation of the two strings in both orders is the same
//         if (str1 + str2 != str2 + str1) {
//             return "";
//         }
//         // Calculate the greatest common divisor of the lengths of the two strings manually
//         int len1 = str1.size();
//         int len2 = str2.size();
        
//         // GCD calculation using the Euclidean algorithm
//         while (len2 != 0) {
//             int temp = len2;
//             len2 = len1 % len2;
//             len1 = temp;
//         }
        
//         // Return the substring from the beginning of str1 up to the gcd length
//         return str1.substr(0, len1);
//     }
// };
