class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || x > INT_MAX)
            return false;
        int temp = x, res = 0;
        while (temp > 0) {
            int digit = temp % 10;
            res = (long long)res * 10 + digit;
            temp /= 10;
        }
        return res == x;
    }
};