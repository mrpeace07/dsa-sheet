class Solution {
public:
    bool isValid(string s)
     {
        

//         for(int i = 0; i < s.size() - 1; i++) {
//             if((s[i] == '(' && s[i+1] == ')') ||
//                (s[i] == '{' && s[i+1] == '}') ||
//                (s[i] == '[' && s[i+1] == ']')) {
//                 // Remove the valid pair and restart the check
//                 s.erase(i, 2);
//                 i = -1;  // Restart the loop from the beginning
//             }
//         }
        
//         // If the string is empty, all pairs were valid
//         return s.empty();
//     }
// };


         stack<char> st;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                char top = st.top();
                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};
