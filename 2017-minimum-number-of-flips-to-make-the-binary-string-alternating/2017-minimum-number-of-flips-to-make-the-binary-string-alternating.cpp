class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        s = s + s;

        int diff1 = 0, diff2 = 0;
        string alt1 = "", alt2 = "";
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0) {
                alt1 += '1';
                alt2 += '0';
            } else {
                alt1 += '0';
                alt2 += '1';
            }
        }
        int l = 0, res = n;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != alt1[i])
                diff1++;
            if (s[i] != alt2[i])
                diff2++;

            if (i - l + 1 > n) {
                if (s[l] != alt1[l])
                    diff1--;
                if (s[l] != alt2[l])
                    diff2--;
                l++;
            }

            if (i - l + 1 == n) {
                res = min(res, min(diff1, diff2));
            }
        }
        return res;
    }
};