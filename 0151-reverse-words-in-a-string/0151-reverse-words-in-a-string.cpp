class Solution {
public:
    string reverseWords(string s) {

        stack<string> st;
        string temp = "", res = "";
        int i = 0;
        while (i < s.size()) {
            if (s[i] == ' ') {
                if (temp != "")
                    st.push(temp);
                temp = "";
            } else {
                temp += s[i];
            }
            i++;
        }
        if (temp != "")
            st.push(temp);
        while (!st.empty()) {
            res += st.top();
            st.pop();
            if (!st.empty())
                res += ' ';
        }
        return res;
    }
};