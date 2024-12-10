class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string maxStr = s.substr(0, 1);
        for (int i = 0; i < n - 1; i++) {
            string odd = expand(s, i, i);
            string even = expand(s, i, i + 1);

            if (odd.size() > maxStr.size())
                maxStr = odd;
            if (even.size() > maxStr.size())
                maxStr = even;
        }
        return maxStr;
    }
    string expand(string s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);
    }
};