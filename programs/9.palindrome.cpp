class Solution {
public:
    bool isPalindrome(int x)
    {
        if (x < 0) return false;

        long long rev = 0;
        long long temp = x;

        while (temp != 0)
        {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        return rev == x;
    }
};


// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x < 0)
//             return false;
//         string s = to_string(x);
//         int len = s.length();
//         for(int i = 0; i < s.length(); i++)
//         {
//             if(s[i] != s[len - i - 1])
//                 return false;
//         }
//         return true;
//     }
// };
