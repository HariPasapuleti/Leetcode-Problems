class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1, high = 0, res = 0;
        for (int i = 0; i < piles.size(); i++) {
            high = max(high, piles[i]);
        }
        while (low <= high) {
            int mid = low - (low - high) / 2;
            long long count = 0;

            for (int i = 0; i < piles.size(); i++) {
                count += (piles[i] + mid - 1) / mid;
            }
            // cout << mid << " " << count << endl;
            if (count <= h) {
                res = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return res;
    }
};