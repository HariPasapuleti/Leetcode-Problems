class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, res = 0;
        unordered_map<char, int> mp;
        while (i < s.size() && j < s.size()) {
            mp[s[j]]++;
            if (mp[s[j]] > 1) {
                while (i < s.size() && s[i] != s[j]) {
                    mp[s[i]]--;
                    i++;
                }
                mp[s[i]]--;
                i++;
            }
            res = max(res, j - i + 1);
            j++;
        }
        return res;
    }
};