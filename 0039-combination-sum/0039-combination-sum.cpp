class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& canditates, int target) {

        int n = canditates.size();
        vector<vector<int>> res;
        vector<int> part;
        helper(0, canditates, target, res, part);

        return res;
    }

    void helper(int index, vector<int> canditates, int target,
                vector<vector<int>>& res, vector<int>& part) {
        if (index == canditates.size()) {
            if (target == 0) {
                res.push_back(part);
            }
            return;
        }

        // cout << "Running" << endl;

        if (canditates[index] <= target) {
            part.push_back(canditates[index]);
            helper(index, canditates, target - canditates[index], res, part);
            part.pop_back();
        }
        helper(index + 1, canditates, target, res, part);
    }
};