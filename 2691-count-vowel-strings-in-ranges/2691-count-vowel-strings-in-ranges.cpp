class Solution {
public:
    vector<int> vowelStrings(vector<string>& words,
                             vector<vector<int>>& queries) {
        int n = words.size(), sum = 0;
        unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u'};
        vector<int> vs(n);
        for (int i = 0; i < n; i++) {
            if (vowels.count(words[i][0]) &&
                vowels.count(words[i][words[i].size() - 1])) {
                sum++;
                // cout << i << endl;
            }
            vs[i] = sum;
            // cout << sum << " ";
        }
        vector<int> res(queries.size());
        for (int i = 0; i < queries.size(); i++) {
            if (queries[i][0] == 0) {
                res[i] = vs[queries[i][1]];
            } else {
                res[i] = vs[queries[i][1]] - vs[queries[i][0] - 1];
            }
        }
        return res;
    }
};