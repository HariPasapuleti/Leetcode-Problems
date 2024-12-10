class Solution {
public:
    int beautySum(string s) {
        int res = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            unordered_map<char, int> mp;
            int maxi = 0;
            for (int j = i; j < s.size(); j++) {
                int mini = INT_MAX;
                mp[s[j]]++;
                maxi = max(maxi, mp[s[j]]);
                for (auto it : mp) {
                    mini = min(mini, it.second);
                }
                res += maxi - mini;
            }
        }
        return res;
    }
};