class Solution {
public:
    string simplifyPath(string path) {

        stack<string> st;
        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '/')
                continue;
            string temp = "";
            while (i < path.size() && path[i] != '/') {
                temp += path[i];
                i++;
            }
            if (temp == "..") {
                if (!st.empty())
                    st.pop();
            } else if (temp == ".") {
                continue;
            } else {
                st.push(temp);
            }
        }
        string res = "";
        while (!st.empty()) {
            res = "/" + st.top() + res;
            st.pop();
        }
        return res == "" ? "/" : res;
    }
};