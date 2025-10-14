class Solution {
public:
    int longestBalanced(string s) {
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            vector<int> cnt(26, 0);
            for (int j = i; j < s.size(); j++) {
                cnt[s[j] - 'a']++;
                bool balance = true;
                int freq = -1;
                for (int k = 0; k < 26; k++) {
                    if (cnt[k] == 0)
                        continue;
                    else if (freq == -1) {
                        freq = cnt[k];
                    } else if (freq != cnt[k]) {
                        balance = false;
                    }
                }
                if (balance)
                    res = max(res, j - i + 1);
            }
        }
        return res;
    }
};