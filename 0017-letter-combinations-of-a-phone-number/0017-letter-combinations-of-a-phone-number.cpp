class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        unordered_map<int, string> mp{{2, "abc"}, {3, "def"}, {4, "ghi"},
                                      {5, "jkl"}, {6, "mno"}, {7, "pqrs"},
                                      {8, "tuv"}, {9, "wxyz"}};
        vector<vector<string>> dp(n, vector<string>(26, ""));
        vector<string> res;
        string temp = "";
        possibility(0, digits, mp, dp, res, temp);
        return res;
    }

    void possibility(int ind, string d, unordered_map<int, string> mp,
                     vector<vector<string>>& dp, vector<string>& res,
                     string temp) {
        if (ind >= d.size()) {
            if (temp != "")
                res.push_back(temp);
            return;
        }

        string value = mp[d[ind] - '0'];
        for (int i = 0; i < value.length(); i++) {
            temp.push_back(value[i]);
            possibility(ind + 1, d, mp, dp, res, temp);
            temp.pop_back();
        }
    }
};