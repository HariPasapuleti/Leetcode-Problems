class Solution {
public:
    string removeOuterParentheses(string s) {

        string res = "";
        int count = 0;
        // stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (count != 0)
                    res += s[i];
                count++;
            } else {
                if (count > 1)
                    res += s[i];
                count--;
            }
        }
        return res;
    }
};