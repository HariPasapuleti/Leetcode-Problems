class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else if (st.empty())
                return false;
            else if ((s[i] == ')' && st.top() == '(') ||
                     (s[i] == ']' && st.top() == '[') ||
                     (s[i] == '}' && st.top() == '{')) {
                cout << st.top() << " " << s[i] << endl;
                st.pop();
            } else
                return false;
        }
        return st.empty() ? true : false;
    }
};