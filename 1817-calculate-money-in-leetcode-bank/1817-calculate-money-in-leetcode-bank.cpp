class Solution {
public:
    int totalMoney(int n) {
        int weeks = n / 7, rem_days = n % 7, start = weeks + 1;
        int total = weeks * 28 + 7 * (weeks * (weeks - 1) / 2);
        for (int i = 0; i < rem_days; i++) {
            total += start + i;
        }
        return total;
    }
};