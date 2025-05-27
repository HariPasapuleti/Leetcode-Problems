class Solution {
public:
    int differenceOfSums(int n, int m) {
        int total_sum = n * (n + 1) / 2, m_divisible = n / m;
        int m_divisible_sum = m_divisible * (m_divisible + 1) / 2;
        return total_sum - (2 * m_divisible_sum * m);
    }
};