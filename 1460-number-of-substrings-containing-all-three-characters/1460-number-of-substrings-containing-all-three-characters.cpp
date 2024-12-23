class Solution {
public:
    int numberOfSubstrings(string s) {

        vector<int> vec(3, -1);
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            vec[s[i] - 'a'] = i;
            if (vec[0] != -1 && vec[1] != -1 && vec[2] != -1) {
                res += 1 + min(vec[0], min(vec[1], vec[2]));
            }
        }
        return res;
    }
};