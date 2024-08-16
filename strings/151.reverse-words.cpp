// class Solution {
// public:
//    string reverseWords(string S1) {
//     string S2;
//     int len = S1.length();
//     int i = len - 1;

//     while (i >= 0) {
//         // Skip any trailing spaces
//         while (i >= 0 && S1[i] == ' ') i--;

//         if (i < 0) break;

//         // Find the end of the current word
//         int end = i;

//         // Find the start of the current word
//         while (i >= 0 && S1[i] != ' ') i--;

//         // Append the word to the result string
//         if (!S2.empty()) S2.append(" ");
//         S2.append(S1.substr(i + 1, end - i));
//     }

//     return S2;
// }

// };

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int n = s.size();
        int left = 0;
        int right = 0;
        int i = 0;
        while (i < n) {
            while (i < n && s[i] == ' ')
                i++;
            if (i == n)
                break;
            while (i < n && s[i] != ' ') {
                s[right++] = s[i++];
            }
            reverse(s.begin() + left, s.begin() + right);
            s[right++] = ' ';
            left = right;
            i++;
        }
        s.resize(right - 1);
        return s;
    }
};
