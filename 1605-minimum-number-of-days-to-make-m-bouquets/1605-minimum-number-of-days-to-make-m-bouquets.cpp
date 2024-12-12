class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size(), maxi = INT_MIN, mini = INT_MAX, res = 0;
        if (n < (long long int)(m * 1ll * k * 1ll))
            return -1;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, bloomDay[i]);
            mini = min(mini, bloomDay[i]);
        }
        int low = mini, high = maxi;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (fun(bloomDay, low, high, k) >= m) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return low;
    }

    int fun(vector<int> flowers, int low, int high, int k) {
        int mid = low + (high - low) / 2;
        int count = 0, res = 0;
        for (int i = 0; i < flowers.size(); i++) {
            if (mid >= flowers[i]) {
                count++;
            } else {
                res += count / k;
                count = 0;
            }
        }
        res += count / k;
        return res;
    }
};