class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {

        string word = "";
        vector<string> res;
        for (int i = 0; i < ceil((double)s.size() / k) * k; i++) {
            word += (i < s.size()) ? s[i] : fill;
            if (word.size() == k) {
                res.push_back(word);
                word = "";
            }
        }
        return res;
    }
};