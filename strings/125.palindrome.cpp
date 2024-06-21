class Solution {
public:
    bool isPalindrome(string s) {
        // Convert the string to lowercase
        for (char& c : s) {
            c = tolower(c);
        }
        
        // Remove non-alphanumeric characters
        string filtered;
        for (char c : s) {
            if (isalnum(c)) {
                filtered += c;
            }
        }

        // Check if the filtered string is a palindrome
        int left = 0, right = filtered.size() - 1;
        while (left < right) {
            if (filtered[left] != filtered[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
