class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long res = 1, count = 1, n = prices.size();
        for (int i = 1; i < n; i++) {
            if (prices[i] == prices[i - 1] - 1) {
                count++;
            } else {
                count = 1;
            }
            res += count;
        }
        return res;
    }
};