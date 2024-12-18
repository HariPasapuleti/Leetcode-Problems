class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        for (int i = 0; i < prices.size() - 1; i++) {
            int num = prices[i];
            for (int j = i + 1; j < prices.size(); j++) {
                if (num >= prices[j]) {
                    prices[i] -= prices[j];
                    break;
                }
            }
        }
        return prices;
    }
};