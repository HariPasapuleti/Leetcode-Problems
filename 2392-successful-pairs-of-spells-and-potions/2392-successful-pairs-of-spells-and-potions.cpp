class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {
        int n = potions.size();
        sort(potions.begin(), potions.end());
        vector<int> res;
        for (int i = 0; i < spells.size(); i++) {
            int low = 0, high = n - 1;
            long limit = ceil((double)success / (double)spells[i]);
            while (low <= high) {
                int mid = low - (low - high) / 2;
                if (potions[mid] >= limit)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            res.push_back(n - low);
        }
        return res;
    }
};