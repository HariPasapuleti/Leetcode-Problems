class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {

        int targetArival = times[targetFriend][0];

        sort(times.begin(), times.end());

        vector<int> chairTime(times.size());

        for (int i = 0; i < times.size(); i++) {
            for (int j = 0; j < chairTime.size(); j++) {
                if (chairTime[j] <= times[i][0]) {
                    chairTime[j] = times[i][1];
                    if (times[i][0] == targetArival)
                        return j;
                    break;
                }
            }
        }
        return 1;
    }
};