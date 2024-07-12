// // class Solution {
// // public:
// //     int lengthOfLastWord(string s) {
// //         // Traverse the string from the end
// //         for (int i = s.size() - 1; i >= 0; i--) {
// //             if (s[i] == ' ' ) {
// //                 // If a space is found, extract the substring from the next character onwards
// //                 s = s.substr(i + 1);
// //                 break; // Break the loop after finding the first space from the end
// //             }
// //         }
// //         // If there were no spaces and the entire string is a single word, we need to handle that case
// //         return s.length();
// //     }
// // };

class Solution {
public:
    int lengthOfLastWord(string s) {
        // Trim any trailing spaces
        int end = s.size() - 1;
        while (end >= 0 && s[end] == ' ') {
            end--;
        }

        // Find the start of the last word
        int start = end;
        while (start >= 0 && s[start] != ' ') {
            start--;
        }

        // Extract the last word and return its length
        return end-start;
    }
}; 
//space complexity is 0(n) caz of using substr we can return it only.  s = s.substr(start + 1, end - start);
       // return s.length(); 

// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int i = s.size()-1;
//         for (; i >= 0; --i) {
//             if (s[i] != ' ') break;
//         }
//         int j = i;
//         for (; j >= 0; --j) {
//             if (s[j] == ' ') break;
//         }
//         return i - j;
//     }
// };
