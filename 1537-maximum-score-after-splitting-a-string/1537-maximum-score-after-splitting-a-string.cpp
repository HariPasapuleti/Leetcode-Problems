class Solution {
public:
    int maxScore(string s) {

        int ones = 0, zeroes = 0, res = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] - '0' == 1)
                ones++;
        }
        // if(s[i]-'0'==0) zeroes++;
        // else
        for (int i = 0; i < s.size()-1; i++) {
            if (s[i] - '0' == 1)
                ones--;
            else
                zeroes++;
            res = max(res, ones + zeroes);
        }

        return res;
    }
};