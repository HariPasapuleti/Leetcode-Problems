class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        // int size_of_array = max(nums1.size(), nums2.size());
        int num = 0, i = 0;
        vector<int> result;
        while(num < nums2.size() && i < nums1.size())
        {
            if(nums1[i] == nums2[num]) 
            {
                result.push_back(nums1[i]);
                i++;
                num++;
                // continue;
            }
            else if(nums1[i] > nums2[num]) num++;
            else i++;

            // if(result.size() == nums1.size() || result.size() == nums2.size()) return result;
            // num++;
            // if(num == nums2.size() - 1)
            // {
            //     i++;
            //     num = 0;
            // }
            
            
        }
        return result;
    }
};