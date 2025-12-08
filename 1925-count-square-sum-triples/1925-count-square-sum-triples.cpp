class Solution {
public:
    int countTriples(int n) {
        vector<bool> sqr(n * n + 1, false);
        for (int i = 0; i <= n; i++) {
            sqr[i * i] = true;
        }
        int count = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int sum = i * i + j * j;
                if (sum <= n * n && sqr[sum]) {
                    count++;
                }
            }
        }
        return count;
    }
};