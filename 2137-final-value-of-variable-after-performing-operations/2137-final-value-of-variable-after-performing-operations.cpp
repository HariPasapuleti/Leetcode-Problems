class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {

        int res = 0;
        for (string op : operations) {
            if ((op[0] == '-' && op[1] == '-') ||
                (op[1] == '-' && op[2] == '-')) {
                res--;
            } else {
                res++;
            }
        }
        return res;
    }
};