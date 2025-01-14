class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int, int> mp;
        vector<int> res;
        int temp = 0;
        for (int i = 0; i < A.size(); i++) {
            mp[A[i]]++;
            mp[B[i]]++;
            if (mp[A[i]] >= 2) {
                mp[A[i]] -= 2;
                temp++;
            }
            if (mp[B[i]] >= 2) {
                mp[B[i]] -= 2;
                temp++;
            }
            res.push_back(temp);
        }
        return res;
    }
};