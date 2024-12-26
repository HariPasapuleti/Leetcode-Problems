class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> temp;
        combo(9, k, n, res, temp);
        return res;
    }
    void combo(int num, int k, int n, vector<vector<int>>& res,
               vector<int> temp) {
        if (num == 0 || n < 0) {
            if (n == 0 && temp.size() == k)
                res.push_back(temp);
            return;
        }
        combo(num - 1, k, n, res, temp);
        temp.push_back(num);
        combo(num - 1, k, n - num, res, temp);
    }
};