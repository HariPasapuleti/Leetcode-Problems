// class Solution {
// public:
//     vector<int> vowelStrings(vector<string>& words,
//                              vector<vector<int>>& queries) {
//         int n = words.size(),sum=0;
//         vector<bool> vs(n, false);
//         for (int i = 0; i < n; i++) {
//             int j = words[i].size() - 1;
//             if ((words[i][0] == 'a' || words[i][0] == 'e' ||
//                  words[i][0] == 'i' || words[i][0] == 'o' ||
//                  words[i][0] == 'u') &&
//                 (words[i][j] == 'a' || words[i][j] == 'e' ||
//                  words[i][j] == 'i' || words[i][j] == 'o' ||
//                  words[i][j] == 'u')) {
//                 sum++;;
//                 // cout << i << endl;
//             }
//             vs[i]=sum;
//         }
//         vector<int> res;
//         for (int i = 0; i < queries.size(); i++) {
//             vector<int> currentQuery = queries[i];
//             res[i] = vs[currentQuery[1]] - (currentQuery[0] == 0 ? 0 : vs[currentQuery[0] - 1]);
//         }
//         return res;
//     }
// };
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words,
                             vector<vector<int>>& queries) {
        vector<int> ans(queries.size());
        unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u'};
        vector<int> prefixSum(words.size());
        int sum = 0;
        for (int i = 0; i < words.size(); i++) {
            string currentWord = words[i];
            if (vowels.count(currentWord[0]) &&
                vowels.count(currentWord[currentWord.size() - 1])) {
                sum++;
            }
            prefixSum[i] = sum;
        }

        for (int i = 0; i < queries.size(); i++) {
            vector<int> currentQuery = queries[i];
            ans[i] =
                prefixSum[currentQuery[1]] -
                (currentQuery[0] == 0 ? 0 : prefixSum[currentQuery[0] - 1]);
        }

        return ans;
    }
};