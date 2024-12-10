class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string, int> mp;
        for (int i = 0; i < s.size(); i++) {
            string temp = "";
            for (int j = i; j < s.size(); j++) {
                if (temp.empty() || temp.back() == s[j]) {
                    temp += s[i];
                    mp[temp]++;
                } else
                    break;
            }
        }

        int res = 0;
        for (auto it : mp) {
            if (it.second >= 3) {
                int num = it.first.size();
                res = max(res, num);
            }
        }
        return res != 0 ? res : -1;
    }
};