class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int res = 0, n = colors.size();
        for (int i = 1; i < n; i++) {
            int maxi = 0;
            while (i < n && colors[i] == colors[i - 1]) {
                res += neededTime[i - 1];
                maxi = max(maxi, neededTime[i - 1]);
                i++;
            }
            res += neededTime[i - 1];
            maxi = max(maxi, neededTime[i - 1]);
            if (maxi != 0)
                res -= maxi;
        }
        return res;
    }
};