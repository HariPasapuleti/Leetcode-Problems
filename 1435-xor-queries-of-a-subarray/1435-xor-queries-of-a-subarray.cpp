class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {

        vector<int> res;

        for(auto query : queries)
        {
            int left = query[0], right = query[1];
            int temp = arr[left];
            left++;
            while(left <= right)
            {
                temp ^= arr[left];
                left++;
            }
            res.push_back(temp);
        }
        return res;
    }
};