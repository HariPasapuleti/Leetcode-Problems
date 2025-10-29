class Solution {
public:
    int smallestNumber(int n) {
        for (int i = 1; i < 31; i++) {
            int full_bit = (1 << i) - 1;
            if (n <= full_bit) {
                return full_bit;
            }
        }
        return 0;
    }
};