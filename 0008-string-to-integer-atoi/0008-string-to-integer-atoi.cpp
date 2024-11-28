class Solution {
public:
    int myAtoi(string s) {

        // const long long mod = 1e9 + 7;
        long long res = 0, sign = 1, i = 0;

        while (i < s.size() && s[i] == ' ')
            i++;

        if (s[i] == '+') {
            sign = 1;
            i++;
        } else if (s[i] == '-') {
            sign = -1;
            i++;
        }

        for (int j = i; j < s.size(); j++) {
            if (s[j] - '0' >= 0 && s[j] - '9' <= 9) {
                res *= 10;
                res += s[j] - '0';

                if (res * sign >= INT_MAX)
                    return INT_MAX;
                else if (res * sign <= INT_MIN)
                    return INT_MIN;

            } else
                break;

        }

        return res*sign;
    }
};