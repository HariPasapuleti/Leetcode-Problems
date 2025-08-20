class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> code;
        code.push_back(0);
        if (n == 0)
            return code;
        code.push_back(1);
        int power = 1;
        for (int i = 1; i < n; i++) {
            power *= 2;
            for (int j = code.size() - 1; j >= 0; j--) {
                code.push_back(code[j] + power);
            }
        }
        return code;
    }
};