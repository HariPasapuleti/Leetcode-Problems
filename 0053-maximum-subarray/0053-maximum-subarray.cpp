class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        if(nums.size()==1) {
            return nums[0];
        }
        int pref = 0, res = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            
            pref += nums[i];
            res = max(res, pref);
            if (pref < 0)
                pref = 0;
        }
        return res;
    }
};