class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {

        int n = str1.size(), m = str2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        lcs(str1, str2, dp);
        int i = n, j = m;
        string res = "";
        while (i > 0 && j > 0) {
            if (str1[i - 1] == str2[j - 1]) {
                res += str1[i-1];
                i--;
                j--;
            } else if (dp[i - 1][j] > dp[i][j - 1]) {
                res += str1[i - 1];
                i--;
            } else {
                res += str2[j - 1];
                j--;
            }
        }
        while (i > 0) {
            res += str1[i - 1];
            i--;
        }
        while (j > 0) {
            res += str2[j - 1];
            j--;
        }

        reverse(res.begin(), res.end());
        return res;
    }

    void lcs(string s1, string s2, vector<vector<int>>& dp) {
        for (int i = 1; i <= s1.size(); i++) {
            for (int j = 1; j <= s2.size(); j++) {
                if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
};