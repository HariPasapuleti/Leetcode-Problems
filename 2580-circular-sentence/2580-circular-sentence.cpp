class Solution {
public:
    bool isCircularSentence(string s) {

        int n = s.size();
        if (s[0] != s[n - 1])
            return false;

        int i = 0;
        while (i < n) {
            if (s[i] == ' ' && s[i - 1] != s[i + 1])
                return false;
            i++;
        }
        return true;
    }
};