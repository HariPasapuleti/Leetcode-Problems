class Solution {
public:
    bool checkValidString(string s) {

        int openBracket = 0, closeBracket = 0, stars = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '*') {
                openBracket++;
            } else {
                openBracket--;
            }

            if (s[s.size() - i - 1] == ')' || s[s.size() - i - 1] == '*') {
                closeBracket++;
            } else {
                closeBracket--;
            }

            if (openBracket < 0 || closeBracket < 0)
                return false;
        }
        return true;
    }
};