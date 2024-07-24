class Solution {
public:

    int convert(vector<int>& mapping, int n)
    {
        int ans = 0, i = 1;
        if (n == 0) return mapping[0];

        while(n)
        {
            int rem = n % 10;
            ans += i * mapping[rem];
            n /= 10;
            i *= 10;
        }
        return ans;
    }

    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {

        map <int, vector<int>> mp;

        for(int i = 0; i < nums.size(); i++)
        {
            mp[convert(mapping, nums[i])].push_back(nums[i]);
        }

        int n = 0;
        for(auto& x : mp)
        {
            for(int i = 0; i < x.second.size(); i++)
            {
                nums[n++] = x.second[i];
            }
        }
        return nums;
    }
};