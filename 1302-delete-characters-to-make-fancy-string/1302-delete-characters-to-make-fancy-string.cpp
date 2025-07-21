class Solution {
public:
    string makeFancyString(string s) {

        if (s.size() < 3)
            return s;
        string str = s.substr(0, 2);
        for (int i = 2; i < s.size(); i++) {
            if (s[i] == s[i - 1] && s[i] == s[i - 2])
                continue;
            str += s[i];
        }
        return str;
    }
};