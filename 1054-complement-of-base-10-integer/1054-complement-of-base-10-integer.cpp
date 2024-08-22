class Solution {
public:
    int bitwiseComplement(int n) {

        if (n == 0)
            return 1;
        int total_sum = pow(2, (int)log2(n) + 1) - 1;
        return total_sum - n;
    }
};