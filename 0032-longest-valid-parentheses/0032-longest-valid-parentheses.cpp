class Solution {
public:
    int longestValidParentheses(string s) {
        int ob = 0, cb = 0, curr_sum = 0, res = 0;
        for (int i = 0; i < s.size(); i++) {
            s[i] == '(' ? ob++ : cb++;
            if (ob == cb) {
                curr_sum = ob + cb;
            } else if (ob < cb) {
                ob = cb = 0;
            }
            res = max(res, curr_sum);
        }

        ob = cb = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            s[i] == '(' ? ob++ : cb++;
            if (ob == cb) {
                curr_sum = ob + cb;
            } else if (ob > cb) {
                ob = cb = 0;
            }
            res = max(res, curr_sum);
        }
        return res;
    }
};