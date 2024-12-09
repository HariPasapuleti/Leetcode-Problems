class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums,
                                vector<vector<int>>& queries) {
        vector<bool> res(queries.size(), false);
        vector<int> prefix(nums.size(), 0);

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] % 2 == nums[i] % 2)
                prefix[i] = prefix[i - 1] + 1;
            else
                prefix[i] = prefix[i - 1];
        }

        for (int i = 0; i < queries.size(); i++) {
            int start = queries[i][0], end = queries[i][1];
            res[i] = prefix[end] - prefix[start] == 0;
        }

        return res;

        // for (int i = 0; i < queries.size(); i++) {
        //     int start = queries[i][0], end = queries[i][1];
        //     int flag = -1;
        //     for (int j = start; j <= end; j++) {
        //         if (nums[j] % 2 == 0) {
        //             if (flag == 0) {
        //                 res.push_back(false);
        //                 break;
        //             }
        //             flag = 0;
        //         } else {
        //             if (flag == 1) {
        //                 res.push_back(false);
        //                 break;
        //             }
        //             flag = 1;
        //         }
        //     }
        //     if (res.size() != i + 1)
        //         res.push_back(true);
        // }
        return res;
    }
};