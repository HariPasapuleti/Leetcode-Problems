class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        set <int> set1(nums1.begin(), nums1.end());
        set <int> set2(nums2.begin(), nums2.end());

        // set<int> s;

        // for(auto i : nums2)
        // {
        //     if(map1.find(i) != map1.end()) s.insert(i);
        // }

        vector<int> v1;
        vector<int> v2;

        for(auto num : set1)
        {
            if(set2.find(num) == set2.end()) v1.push_back(num);
        }

        for(auto num : set2)
        {
            if(set1.find(num) == set1.end()) v2.push_back(num);
        }
        return {v1, v2};
    }
};