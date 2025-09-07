class Solution {
public:
    vector<int> sumZero(int n) {
        int last = n * (n - 1) / 2;
        vector<int> res;
        while (n-- > 1) {
            res.push_back(n);
        }
        res.push_back(last * (-1));
        return res;
    }
};