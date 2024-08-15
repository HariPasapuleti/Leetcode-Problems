class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> hash_map;

        for (int i = 0; i < nums.size(); i++) {
            int remain = target - nums[i]; // Negative numbers are also existed
            if (hash_map.count(remain)) {
                return {hash_map[remain], i};
            }
            hash_map[nums[i]] = i;
        }

        return {};

        // int i = 0, j = i + 1;
        // vector<int> vec;

        // while (i < nums.size() - 1) {
        //     if (nums[i] + nums[j] == target) {
        //         vec.push_back(i);
        //         vec.push_back(j);
        //         return vec;
        //     } else {
        //         j++;
        //     }

        //     if (j > nums.size() - 1) {
        //         i++;
        //         j = i + 1;
        //     }
        // }

        // return vec;
    }
};