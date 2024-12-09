class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            if (mp.find(s[i]) != mp.end()) {
                if (t[i] != mp[s[i]])
                    return false;
            } else {
                for (auto it : mp) {
                    if (it.second == t[i])
                        return false;
                }
                mp[s[i]] = t[i];
            }
        }
        return true;
    }
};