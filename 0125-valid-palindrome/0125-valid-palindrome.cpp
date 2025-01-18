class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            while (i < s.size() && !isalpha(s[i]) && !isdigit(s[i]))
                i++;
            while (j > 0 && !isalpha(s[j]) && !isdigit(s[j]))
                j--;
            if (isalpha(s[i]) && isalpha(s[j]) &&
                (s[i] - 'a' == s[j] - 'a' || s[i] - 'A' == s[j] - 'A' ||
                 s[i] - 'a' == s[j] - 'A' || s[i] - 'A' == s[j] - 'a')) {
                i++;
                j--;
            } else if (s[i] - '0' == s[j] - '0') {
                i++;
                j--;
            } else {
                if ((isalpha(s[i]) || isdigit(s[i])) &&
                    (isalpha(s[j]) || isdigit(s[j])))
                    return false;
            }
        }
        return true;
    }
};