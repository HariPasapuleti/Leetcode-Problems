class Solution {
public:
    long long findScore(vector<int>& nums) {
        vector<pair<int, int>> sorted(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            sorted[i] = {nums[i], i};
        }
        sort(sorted.begin(), sorted.end());
        vector<bool> marked(nums.size(), false);
        long long score = 0;
        for (int i = 0; i < nums.size(); i++) {
            int number = sorted[i].first;
            int index = sorted[i].second;
            if (!marked[index]) {
                score += nums[index];
                marked[index] = true;
                if (index != 0)
                    marked[index - 1] = true;
                if (index != nums.size() - 1)
                    marked[index + 1] = true;
            }
        }
        return score;
    }
};