class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> mpp;
        vector<int> ans;

        // Traverse nums2 from end to start
        for (int i = nums2.size() - 1; i >= 0; i--) {
            // Pop all smaller or equal elements
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            // If stack is empty, no greater element
            if (st.empty()) {
                mpp[nums2[i]] = -1;
            } else {
                mpp[nums2[i]] = st.top();
            }

            // Push current element into stack
            st.push(nums2[i]);
        }

        // Now use the map to build answer
        for (int i = 0; i < nums1.size(); i++) {
            ans.push_back(mpp[nums1[i]]);
        }

        return ans;
    }
};
