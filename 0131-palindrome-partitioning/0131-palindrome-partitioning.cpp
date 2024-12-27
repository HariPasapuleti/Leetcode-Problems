class Solution {
public:
    vector<vector<string>> partition(string s) {
        int n = s.size();
        vector<vector<string>> res;
        vector<string> temp;
        func(0, s, temp, res);
        return res;
    }

    void func(int ind, string s, vector<string> temp,
              vector<vector<string>>& res) {
        if (ind == s.size()) {
            res.push_back(temp);
            return;
        }

        for (int i = ind; i < s.size(); i++) {
            if (isPalindrome(s, ind, i)) {
                temp.push_back(s.substr(ind, i - ind + 1));
                func(i + 1, s, temp, res);
                temp.pop_back();
            }
        }
    }

    bool isPalindrome(string s, int start, int end) {
        while (start <= end) {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
};