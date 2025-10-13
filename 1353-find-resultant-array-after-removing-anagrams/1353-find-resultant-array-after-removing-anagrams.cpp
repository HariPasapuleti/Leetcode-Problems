class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> res;
        res.push_back(words[0]);
        for (int i = 1; i < words.size(); i++) {
            string last_word = res.back();
            sort(last_word.begin(), last_word.end());
            string sort_word = words[i];
            sort(sort_word.begin(), sort_word.end());
            if (last_word != sort_word) {
                res.push_back(words[i]);
            }
        }
        return res;
    }
};