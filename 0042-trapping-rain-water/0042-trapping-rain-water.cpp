class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefixMax(n, 0), suffixMax(n, 0);
        suffixMax[0] = height[0];
        prefixMax[n - 1] = height[n - 1];
        for (int i = 1; i < n; i++) {
            suffixMax[i] = max(suffixMax[i - 1], height[i]);
            prefixMax[n - i - 1] = max(prefixMax[n - i], height[n - i]);
            // cout << suffixMax[i] << " " << prefixMax[n - i - 1] << endl;
        }

        int res = 0;
        for (int i = 0; i < n; i++) {
            if (min(prefixMax[i], suffixMax[i]) >= height[i]) {
                res += min(prefixMax[i], suffixMax[i]) - height[i];
            }
        }
        return res;
    }
};