class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> res(nums1.size(), 0);
        unordered_map<int, int> numStore;
        for (int i = nums2.size() - 1; i >= 0; i--) {
            while (!st.empty() && nums2[i] > st.top()) {
                st.pop();
            }
            if (st.empty()) {
                numStore[nums2[i]] = -1;
            } else {
                numStore[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }

        for (int i = 0; i < nums1.size(); i++) {
            res[i] = numStore[nums1[i]];
        }
        return res;
    }
};