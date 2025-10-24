class Solution {
public:
    int nextBeautifulNumber(int n) {
        for (int i = n + 1; i <= 10000000; i++) {
            if (isBalance(i)) {
                return i;
            }
        }
        return 0;
    }

    bool isBalance(int num) {
        vector<int> cnt(10);
        while (num > 0) {
            cnt[num % 10]++;
            num /= 10;
        }
        for (int d = 0; d < 10; d++) {
            if (cnt[d] > 0 && cnt[d] != d)
                return false;
        }
        return true;
    }
};