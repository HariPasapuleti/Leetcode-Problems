class Solution {
public:
    int reverse(int x) {
        // bool sign = (x >= 0);
        int temp = x, res = 0;

        while (temp != 0) {
            int digit = temp % 10;
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && digit > 7))
                return 0;
            else if (res < INT_MIN / 10 || (res == INT_MIN / 10) && digit < -8)
                return 0;
            res = res * 10 + digit;
            temp /= 10;
        }
        return res;
    }
};