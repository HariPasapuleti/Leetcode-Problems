class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = 0, ans = 0;
        for (int i = 0; i < piles.size(); i++)
            maxi = max(maxi, piles[i]);
        int low = 1, high = maxi;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long count = 0;
            for (int i = 0; i < piles.size(); i++) {
                // cout << piles[i] << " " << mid << endl;
                count += ceil((double)(piles[i]) / (double)mid);
                // cout << (piles[i]+mid-1)/mid << endl;
            }
            if (count <= h) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }
};