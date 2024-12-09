class Solution {
public:
    string largestOddNumber(string num) {
        int flag = 0;
        string res = "";
        for (int i = num.size() - 1; i >= 0; i--) {
            if (flag == 1) {
                res += num[i];
                continue;
            }
            if ((num[i] - '0') % 2 != 0) {
                flag = 1;
                res += num[i];
            }
        }
        if (res == "")
            return res;
        reverse(res.begin(), res.end());
        return res;
    }
};