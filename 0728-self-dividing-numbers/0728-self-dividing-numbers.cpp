class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {

        vector<int> res;
        for (int i = left; i <= right; i++) {
            int num = i, flag = 0;
            while (num > 0) {
                flag = 0;
                int digit = num % 10;
                if (digit == 0 || i % digit != 0) {
                    flag = 1;
                    break;
                };
                num /= 10;
            }
            if (flag == 0)
                res.push_back(i);
        }
        return res;
    }
};