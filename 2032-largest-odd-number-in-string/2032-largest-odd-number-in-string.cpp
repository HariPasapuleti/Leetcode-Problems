class Solution {
public:
    string largestOddNumber(string num) {
        string res = "", temp = "";
        for (int i = 0; i < num.size(); i++) {
            temp += num[i];
            if ((num[i] - '0') % 2 != 0)
                res = temp;
        }
        return res;
    }
};