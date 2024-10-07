class Solution {
public:
    int minLength(string s) {

        stack<char> stk;

        int i = 0;
        for (int i = 0; i < s.size(); i++) {
            if (!stk.empty() && ((stk.top() == 'A' && s[i] == 'B') ||
                                 (stk.top() == 'C' && s[i] == 'D')))
                stk.pop();
            else
                stk.push(s[i]);
        }

        return stk.size();
    }
};