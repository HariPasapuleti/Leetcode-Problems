class Solution {
public:
    int findComplement(int num) {

        int max_num = pow(2, (int)log2(num) + 1) - 1;
        return max_num - num;
    }
};