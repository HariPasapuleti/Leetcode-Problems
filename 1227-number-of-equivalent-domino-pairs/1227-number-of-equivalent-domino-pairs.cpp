class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int, int> mp;
        int count = 0;
        for (auto& it : dominoes) {
            int num = it[0] > it[1] ? it[0] * 10 + it[1] : it[1] * 10 + it[0];
            count += mp[num];
            mp[num]++;
        }
        return count;
    }
};