class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int res = INT_MAX;
        for (auto task : tasks) {
            res = min(res, task[0] + task[1]);
        }
        return res;
    }
};