class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0)
            return false;
        int val = n;
        while (val % 3 == 0) {
            val /= 3;
        }
        return val == 1;
    }
};