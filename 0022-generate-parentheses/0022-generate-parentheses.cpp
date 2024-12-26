class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string temp = "";
        vector<string> res;
        int close = 0;
        func(n, temp, close, res);
        return res;
    }
    void func(int n, string temp, int close, vector<string>& res) {
        if (n == 0 && close == 0) {
            res.push_back(temp);
            return;
        }
        if (close > 0) {
            func(n, temp + ')', close - 1, res);
        }
        if (n > 0)
            func(n - 1, temp + '(', close + 1, res);
    }
};