class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        int sum=0, k=0;
        for(int i=0;i<nums.size();i++)
        {
            int j=i+1;
            k=nums.size()-1;
            while(j<k)
            {
                sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    s.insert({nums[i], nums[j], nums[k]});
                    k--;
                    j++;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        vector<vector<int>> res;
        for(auto triplets:s){
            res.push_back(triplets);
        }
        return res;
    }
};