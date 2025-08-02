class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {

        unordered_map<int, int> freq;
        int min_element = INT_MAX;
        for (int i = 0; i < basket1.size(); i++) {
            freq[basket1[i]]++;
            freq[basket2[i]]--;
            min_element = min(min_element, min(basket1[i], basket2[i]));
        }

        vector<int> toSwap;
        for (auto [fruit_cost, count] : freq) {
            if (count % 2 != 0)
                return -1;
            for (int i = 0; i < abs(count) / 2; i++) {
                toSwap.push_back(fruit_cost);
            }
        }
        sort(toSwap.begin(), toSwap.end());
        long long swapCost = 0;
        for (int i = 0; i < toSwap.size() / 2; i++) {
            swapCost += min(min_element * 2, toSwap[i]);
        }
        return swapCost;
    }
};