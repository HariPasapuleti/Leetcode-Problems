class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<int, int> mp;
        for (int i = 0; i < t.size(); i++) {
            mp[t[i]]++;
        }
        int count = 0, j = 0, minLen = INT_MAX, start = -1;
        for (int i = 0; i < s.size(); i++) {
            if (mp.find(s[i]) != mp.end()) {
                if (mp[s[i]] > 0)
                    count++;
                mp[s[i]]--;
            }
            while (count == t.size()) {
                if (i - j + 1 < minLen) {
                    minLen = i - j + 1;
                    start = j;
                }
                if (mp.find(s[j]) != mp.end()) {
                    mp[s[j]]++;
                    if (mp[s[j]] > 0)
                        count--;
                }
                j++;
            }
        }
        return start == -1 ? "" : s.substr(start, minLen);
    }
};