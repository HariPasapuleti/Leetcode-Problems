class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {

        unordered_map<int, int> mp;
        for (int i = 0; i < banned.size(); i++) {
            mp[banned[i]]++;
        }
        int res = 0;
        for (int i = 1; i <= n; i++) {
            if (mp.find(i) == mp.end()) {
                if (maxSum >= i) {
                    maxSum -= i;
                    res++;
                }
            }
        }
        return res;
    }
};