class Solution {
public:
    int characterReplacement(string s, int k) {

        int maxi = 0, j = 0, res = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i] - 'A']++;
            maxi = max(maxi, mp[s[i] - 'A']);
            while ((i - j + 1) - maxi > k) {
                mp[s[j] - 'A']--;
                maxi = 0;
                for (auto it : mp) {
                    maxi = max(maxi, it.second);
                }
                j++;
            }
            res = max(res, i - j + 1);
        }
        return res;
    }
};