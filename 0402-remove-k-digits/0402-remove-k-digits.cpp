class Solution {
public:
    string removeKdigits(string num, int k) {
        string res = "";
        stack<char> st;
        for (int i = 0; i < num.size(); i++) {
            while (k > 0 && !st.empty() && num[i] < st.top()) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        while (res.size() != 0 && res.back() == '0') {
            res.pop_back();
        }
        reverse(res.begin(), res.end());
        return !res.empty() ? res : "0";
    }
};