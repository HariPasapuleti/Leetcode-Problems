class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {

        int max_element=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            max_element=max_element|nums[i];
        }
        cout << max_element << endl;
        int res=0;
        subsetCount(0, nums, max_element, 0, res);
        return res;
    }

    void subsetCount(int index, vector<int> nums, int max_element, int temp, int &res)
    {
        
        if(index==nums.size()){
            if(temp==max_element) {
                res++;
            }
            return;
        }

        subsetCount(index+1, nums, max_element, temp|nums[index], res);
        subsetCount(index+1, nums, max_element, temp, res);
    }
};