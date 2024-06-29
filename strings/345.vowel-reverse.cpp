class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;
        string vowels = "aeiouAEIOU";
        
        while (i < j) {
            while (i < j && vowels.find_first_of(s[i]) == string::npos) //>= vowels.size()) {
                i++;
            }
            while (i < j && vowels.find_first_of(s[j]) == string::npos) //>= vowels.size())  {
                j--;
            }
            
            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        
        return s;
    }
};

// class Solution { //brute force
// public:
//     string reverseVowels(string s) {
//         int i = 0;
//         int j = s.size() - 1;
        
//         while (i < j) {
//             while (i < j && !(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
//                               s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')) {
//                 i++;
//             }
//             while (i < j && !(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' ||
//                               s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U')) {
//                 j--;
//             }
            
//             if (i < j) {
//                 std::swap(s[i], s[j]);
//                 i++;
//                 j--;
//             }
//         }
        
//         return s;
//     }
// };



// class Solution { //using help function
// public:
//     string reverseVowels(string s) {
//         int i = 0;
//         int j = s.size() - 1;
        
//         while (i < j) {
//             while (i < j && !isVowel(s[i])) {
//                 i++;
//             }
//             while (i < j && !isVowel(s[j])) {
//                 j--;
//             }
            
//             if (i < j) {
//                 swap(s[i], s[j]);
//                 i++;
//                 j--;
//             }
//         }
   
        
//         return s;
//     }
//      private:
//     bool isVowel(char c) {
//         c = tolower(c);
//         return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
//     }
// };

// class Solution { using STL
// public:
//     string reverseVowels(string s) {
//         int i = 0;
//         int j = s.length()-1;
//         while(i<j){
//            i = s.find_first_of("aeiouAEIOU", i);
//            j = s.find_last_of("aeiouAEIOU", j);
//            if(i<j){
//               swap(s[i++],  s[j--]);
//            }
//         }
//         return s;
//     }
    
// };
