class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        map <int, int> map1;
        map <int, int> map2;

        for(auto num : nums1)
        {
            map1[num++];
        }

        for(auto num : nums2)
        {
            map2[num++];
        }

        set<int> s;

        for(auto i : nums2)
        {
            if(map1.find(i) != map1.end()) s.insert(i);
        }

        vector<int> v1;
        vector<int> v2;

        for(auto i : map1)
        {
            if(s.find(i.first) == s.end()) v1.push_back(i.first);
        }

        for(auto i : map2)
        {
            if(s.find(i.first) == s.end()) v2.push_back(i.first);
        }
        return {v1, v2};
    }
};