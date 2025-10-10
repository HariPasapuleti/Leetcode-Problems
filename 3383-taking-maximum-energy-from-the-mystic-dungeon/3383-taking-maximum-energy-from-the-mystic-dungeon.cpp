class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {

        int res = INT_MIN, temp = 0, n = energy.size();
        for (int i = n - k; i < n; i++) {
            temp = 0;
            for (int j = i; j >= 0; j -= k) {
                temp += energy[j];
                res = max(res, temp);
            }
        }
        return res;
    }
};