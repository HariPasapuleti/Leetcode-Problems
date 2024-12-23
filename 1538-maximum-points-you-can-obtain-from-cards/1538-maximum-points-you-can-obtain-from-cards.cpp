class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int res = 0;
        for (int i = 0; i < k; i++) {
            res += cp[i];
        }

        int total = res;
        for (int i = k - 1; i >= 0; i--) {
            total -= cp[i];
            total += cp[cp.size() - k + i];
            res = max(res, total);
        }
        return res;
    }
};