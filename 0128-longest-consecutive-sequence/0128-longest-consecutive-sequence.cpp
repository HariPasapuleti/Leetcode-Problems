class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st;
        int count = 0, res = 0;

        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        for (auto& s : st) {
            if (st.find(s - 1) == st.end()) {
                count = 1;
                int x = s;
                while (st.find(x + 1) != st.end()) {
                    count++;
                    x++;
                }
            }
            res = max(res, count);
        }
        return res;
    }
};