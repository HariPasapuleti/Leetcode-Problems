class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {

        int i = 0, max_ones = 0, zeroes = 0, ones = 0, flag = 0;
        while (i < s.size()) {
            if (s[i] == '0') {
                if (flag == 1)
                    zeroes = 0;
                zeroes++;
                ones = 0;
                flag = 0;
            } else if (zeroes > 0 && s[i] == '1') {
                ones++;
                zeroes--;
                max_ones = max(max_ones, ones);
                flag = 1;
            }
            i++;
        }
        return max_ones * 2;
    }
};