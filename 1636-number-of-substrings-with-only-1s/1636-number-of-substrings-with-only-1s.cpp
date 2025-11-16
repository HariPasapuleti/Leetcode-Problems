class Solution {
public:
    int numSub(string s) {
        long long ones = 0, res = 0;
        int mod=1e9+7;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                ones++;
            } else {
                res += (ones * (ones + 1) / 2)%mod;
                res%=mod;
                ones = 0;
            }
        }
        return res + ones * (ones + 1) / 2;
    }
};