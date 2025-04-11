class Solution {
public:
    int countSymmetricIntegers(int low, int high) {

        int temp_high = low;
        int res = 0;
        for (int num = low; num <= high; num++) {
            int temp = num, sum = 0, count = 0;
            int digits = digits_count(temp);
            if (digits % 2 != 0)
                continue;
            while (temp > 0) {
                if (count < digits / 2)
                    sum += temp % 10;
                else
                    sum -= temp % 10;
                temp /= 10;
                count++;
            }
            if (sum == 0)
                res++;
        }
        return res;
    }

    int digits_count(int n) {
        int digits = 0;
        while (n > 0) {
            digits++;
            n /= 10;
        }
        return digits;
    }
};