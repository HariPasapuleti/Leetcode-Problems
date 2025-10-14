class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> res;
        long long unit = 1;
        while (n > 0) {
            int temp = n % 10;
            if (temp != 0) {
                res.push_back(temp * unit);
            }
            n /= 10;
            unit *= 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};