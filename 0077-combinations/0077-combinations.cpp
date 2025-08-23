class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> temp;
        combo(1, n, k, temp, res);
        return res;
    }

    void combo(int val, int num, int k, vector<int> &temp,
               vector<vector<int>>& res) {
        if (temp.size() == k) {
            res.push_back(temp);
            return;
        }
        if (val > num) {
            return;
        }

        for (int ind = val; ind <= num; ind++) {
            temp.push_back(ind);
            combo(ind + 1, num, k, temp, res);
            temp.pop_back();
        }
        // temp.push_back(val);
        // combo(val + 1, num, k, temp, res);
        // temp.pop_back();
        // combo(val + 1, num, k, temp, res);
    }
};