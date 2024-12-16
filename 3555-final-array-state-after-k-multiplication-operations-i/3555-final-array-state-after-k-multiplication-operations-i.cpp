class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

        while (k--) {
            auto minElement = min_element(nums.begin(), nums.end());
            cout << *minElement <<endl;
            int min_index = distance(nums.begin(), minElement);
            nums[min_index] *= multiplier;
        }
        return nums;
    }
};