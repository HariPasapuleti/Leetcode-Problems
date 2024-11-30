class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        vector<int> res;
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        int div = nums.size() / 3;
        cout << div << endl;
        for (auto num : mp) {
            cout << num.second << endl;
            if (num.second > div)
                res.push_back(num.first);
        }

        return res;
    }
};