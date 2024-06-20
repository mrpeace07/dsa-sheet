class Solution {
public:
  string reverseWords(string S1) {
    string S2;
    int len = S1.length();
    int i = len - 1;

    while (i >= 0) {
        // Skip any trailing spaces
        while (i >= 0 && S1[i] == ' ') i--;

        if (i < 0) break;

        // Find the end of the current word
        int end = i;

        // Find the start of the current word
        while (i >= 0 && S1[i] != ' ') i--;

        // Append the word to the result string
        if (!S2.empty()) S2.append(" ");
        S2.append(S1.substr(i + 1, end - i));
    }

    return S2;
}

// string reverseWords(string S1) {
//     string S2;
//     int len = S1.length();
//     int i = len - 1;
//     bool firstWord = true;

//     while (i >= 0) {
//         // Skip any trailing spaces
//         while (i >= 0 && S1[i] == ' ') i--;

//         if (i < 0) break;

//         // Find the end of the current word
//         int end = i;

//         // Find the start of the current word
//         while (i >= 0 && S1[i] != ' ') i--;

//         // Append the word to the result string
//         if (!firstWord) {
//             S2.append(" ");
//         }
//         S2.append(S1.substr(i + 1, end - i));
//         firstWord = false;
//     }

//     return S2;
// }

};
