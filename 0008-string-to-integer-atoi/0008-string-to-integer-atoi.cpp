class Solution {
public:
    int myAtoi(string s) {

        int sign = 1, flag1 = 0, pn = 0;
        long long value = 0;
        for (int i = 0; i < s.size(); i++) {

            if(s[i] == ' ') {
                if(flag1 == 1 || pn > 0) break;
                continue;
            }
            
            if (s[i] == '-' && flag1 == 0) {
                sign = -1;
            }

            if (s[i] == '-' || s[i] == '+') {
                pn++;
                if(flag1 == 1 || pn > 1) break;
                continue;
            }

            if (s[i] - '0' <= 9 && s[i] - '0' >= 0) {
                flag1 = 1;
                value *= 10;
                value += s[i] - '0';
                if (value * sign >= INT_MAX) {
                    return INT_MAX;
                }
                if (value * sign <= INT_MIN) {
                    return INT_MIN;
                }
            } else {
                break;
            }
        }

        return value * sign;
    }
};