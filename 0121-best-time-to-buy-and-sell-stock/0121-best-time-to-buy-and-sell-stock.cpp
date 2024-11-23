class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int res = 0, j = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < prices[j])
                j = i;
            res = max(res, prices[i] - prices[j]);
        }
        return res;
    }
};