class Solution {
public:
    bool static cmp(const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        int n = intervals.size(), res = 0;
        sort(intervals.begin(), intervals.end(), cmp);

        int prev_end = intervals[0][1];
        for (int i = 1; i < n; i++) {
            if (prev_end > intervals[i][0])
                res++;
            else
                prev_end = intervals[i][1];
        }
        return res;
    }
};