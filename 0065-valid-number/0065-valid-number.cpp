class Solution {
public:
    bool isNumber(string s) {
        bool dot = false, eAlpha = false, num = false;
        int i = 0;
        while (i < s.size()) {
            if (isdigit(s[i])) {
                num = true;
            } else if (s[i] == '.') {
                if (dot || eAlpha)
                    return false;
                dot = true;
            } else if (s[i] == 'e' || s[i] == 'E') {
                if (eAlpha || !num)
                    return false;
                eAlpha = true;
                num = false;
            } else if (s[i] == '-' || s[i] == '+') {
                if (i != 0 && s[i - 1] != 'e' && s[i - 1] != 'E') {
                    return false;
                }
            } else
                return false;

            i++;
        }
        return num;
    }
};