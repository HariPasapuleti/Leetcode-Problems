class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string token : tokens) {
            if (token == "/" || token == "*" || token == "+" || token == "-") {
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                int res = 0;
                if (token == "/")
                    res = num2 / num1;
                else if (token == "*")
                    res = num2 * num1;
                else if (token == "+")
                    res = num2 + num1;
                else if (token == "-")
                    res = num2 - num1;

                st.push(res);
            } else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};