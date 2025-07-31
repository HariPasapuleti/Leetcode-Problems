class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {

        unordered_set<int> curr, nxt, res;
        for (int num : arr) {
            nxt.clear();
            nxt.insert(num);
            for (int i : curr) {
                nxt.insert(i | num);
            }
            curr = nxt;
            res.insert(curr.begin(), curr.end());
        }
        return res.size();
    }
};