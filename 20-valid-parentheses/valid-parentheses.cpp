class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else {
                if(st.empty()) return false;  // no matching opening bracket

                char top = st.top();
                if((ch == ')' && top != '(') ||
                   (ch == '}' && top != '{') ||
                   (ch == ']' && top != '[')) {
                    return false;  // mismatch
                }
                st.pop();  // matched pair
            }
        }

        return st.empty();  // should be empty if valid
    }
};
