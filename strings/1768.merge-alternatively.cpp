class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int x = word1.length();
        int y = word2.length();
        string s1;
        s1.reserve(x + y);  // Reserve space to avoid multiple reallocations

        int i = 0, j = 0;
        while (i < x || j < y) {
            if (i < x) s1.push_back(word1[i++]);
            if (j < y) s1.push_back(word2[j++]);
        }

        return s1;
    }
};

// class Solution {
// public:
//     string mergeAlternately(string word1, string word2) {
        
//         int x = word1.length();
//         int y = word2.length();
//         string s1;

//         int i = 0, j = 0;
//         while (i < x || j < y) {
//             if (i < x) {
//                 s1.push_back(word1[i]);
//                 i++;
//             }
//             if (j < y) {
//                 s1.push_back(word2[j]);
//                 j++;
//             }
//         }

//         return s1;
//     }
// };

// class Solution {
// public:
//     string mergeAlternately(string word1, string word2) {
//         int x = word1.length();
//         int y = word2.length();
//         string merged;
//         merged.reserve(x + y); // Reserve space to avoid multiple reallocations

//         int maxLength = std::max(x, y);
//         for (int i = 0; i < maxLength; ++i) {
//             if (i < x) {
//                 merged.push_back(word1[i]);
//             }
//             if (i < y) {
//                 merged.push_back(word2[i]);
//             }
//         }

//         return merged;
//     }
// };
