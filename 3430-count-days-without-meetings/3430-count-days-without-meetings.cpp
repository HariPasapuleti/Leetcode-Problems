class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end(), cmp);
        int completedDay = 0, busyDays = 0, prevEnd = 0;
        for (auto& meeting : meetings) {
            int start = meeting[0], end = meeting[1];
            if (start > prevEnd)
                busyDays += end - start + 1;
            else if (end > prevEnd)
                busyDays += end - prevEnd;
            prevEnd = max(prevEnd, end);
        }
        return days - busyDays;
    }

    static bool cmp(const vector<int>& a, const vector<int>& b) {
        if (a[0] == b[0])
            return a[1] < b[1];
        return a[0] < b[0];
    }
};