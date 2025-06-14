class Solution {
public:
    int minMaxDifference(int num) {
        int first_digit = 0, temp = num, preffered_digit=9;
        while (temp > 0) {
            if (temp % 10 != 9)
                preffered_digit = temp % 10;
            if (temp % 10 > 0)
                first_digit = temp % 10;
            temp /= 10;
        }
        int mini = 0, maxi = 0, digits = 0;
        cout << first_digit << " " << preffered_digit << endl;
        while (num > 0) {
            int last_digit = num % 10;
            if (last_digit == preffered_digit) {
                maxi += 9 * pow(10, digits);
            } else {
                maxi += last_digit * pow(10, digits);
            }

            if (last_digit != first_digit)
                    mini += last_digit * pow(10, digits);

            digits++;
            num /= 10;
        }
        cout << maxi << " " << mini;
        return maxi - mini;
    }
};