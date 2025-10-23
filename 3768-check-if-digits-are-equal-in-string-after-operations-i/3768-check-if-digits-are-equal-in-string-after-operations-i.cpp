class Solution {
public:
    bool hasSameDigits(string s) {
        string new_str = "";
        while (s.size() > 2) {
            for (int i = 1; i < s.size(); i++) {
                new_str += (s[i] - '0' + s[i - 1] - '0') % 10;
            }
            s = new_str;
            new_str = "";
        }
        return s.size() == 2 && s[0] == s[1];
    }
};