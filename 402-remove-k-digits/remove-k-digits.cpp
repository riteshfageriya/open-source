class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for (char digit : num) {
            while (!st.empty() && k > 0 && st.top() > digit) {
                st.pop();
                k--;
            }
            st.push(digit);
        }

        // If k is still > 0, remove from the end
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        // Build the result string
        string res;
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());

        // Remove leading zeros
        int i = 0;
        while (i < res.length() && res[i] == '0') {
            i++;
        }

        res = res.substr(i);
        return res.empty() ? "0" : res;
    }
};
