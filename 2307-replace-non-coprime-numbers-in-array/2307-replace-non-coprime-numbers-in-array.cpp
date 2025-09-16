class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> res;
        for (int num : nums) {
            res.push_back(num);
            while (res.size() > 1) {
                int a = res.back(), b = res[res.size() - 2];
                int g = gcd(a, b);
                if (g > 1) {
                    res.pop_back();
                    res.pop_back();
                    long long lcm = (long long)a * b / g;
                    res.push_back(lcm);
                } else {
                    break;
                }
            }
        }
        return res;
    }
};