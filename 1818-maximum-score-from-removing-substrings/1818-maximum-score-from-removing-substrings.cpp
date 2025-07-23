class Solution {
public:
    int maximumGain(string s, int x, int y) {

        int top_score, bot_score, res = 0;
        string top = "", bot = "";
        if (x > y) {
            top = "ab";
            top_score = x;
            bot = "ba";
            bot_score = y;
        } else {
            top = "ba";
            top_score = y;
            bot = "ab";
            bot_score = x;
        }

        stack<char> st1, st2;
        for (char ch : s) {
            if (!st1.empty() && st1.top() == top[0] && ch == top[1]) {
                st1.pop();
                res += top_score;
            } else {
                st1.push(ch);
            }
        }

        while (!st1.empty()) {
            if (!st2.empty() && st2.top() == bot[1] && st1.top() == bot[0]) {
                st2.pop();
                res += bot_score;
            } else {
                st2.push(st1.top());
            }
            st1.pop();
        }
        return res;
    }
};