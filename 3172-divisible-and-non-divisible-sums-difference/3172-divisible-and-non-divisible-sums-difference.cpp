class Solution {
public:
    int differenceOfSums(int n, int m) {
        int total_sum = n * (n + 1) / 2, m_divisible = n / m;
        return total_sum - (m_divisible * (m_divisible + 1) * m);
    }
};