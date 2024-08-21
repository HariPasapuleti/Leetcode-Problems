class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {

        vector<int> odd, even;
        for(int i = 0; i < nums.size(); i++)
        {
            if(i % 2 == 0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }

        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end());

        int i = 0, j = 0;

        for(int k = 0; k < nums.size(); k++)
        {
            if(k % 2 == 0) nums[k] = even[i++];
            else nums[k] = odd[j++];
        }
        return nums;
    }
};