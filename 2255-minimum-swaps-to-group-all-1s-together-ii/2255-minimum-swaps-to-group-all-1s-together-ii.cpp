class Solution {
public:
    int minSwaps(vector<int>& nums) {

        int one = 0;
        for (auto& x : nums)
            if (x == 1)
                one++;
        if (one <= 1)
            return 0;
        vector<int> a = nums;
        for (auto& x : nums) {
            a.push_back(x);
        }
        int n = a.size();
        int ans = n;
        int i = 0, j = 0;
        int count = 0;
        for (; j < n; j++) {
            if (a[j] == 0)
                count++;
            while (i < j && (j - i + 1) > one) {
                if (a[i] == 0)
                    count--;
                i++;
            }
            if ((j - i + 1) == one)
                ans = min(ans, count);
        }

        return ans;
    }
};