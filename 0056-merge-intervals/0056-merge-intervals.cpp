class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end(), cmp);
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++) {
            if (res[res.size() - 1][1] >= intervals[i][0]) {
                vector<int> temp = {
                    res[res.size() - 1][0],
                    max(res[res.size() - 1][1], intervals[i][1])};
                res.pop_back();
                res.push_back(temp);
            } else {
                res.push_back(intervals[i]);
            }
        }
        return res;
    }

    static bool cmp(vector<int>& x, vector<int>& y) { return x[0] < y[0]; }
};