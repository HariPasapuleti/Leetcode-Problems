class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int n1 = words1.size(), n2 = words2.size();
        vector<string> res;
        vector<int> maxFreq(26, 0);
        for (const string& word2:words2) {
            vector<int> freq1(26, 0);
            for (char c:word2) {
                freq1[c - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                maxFreq[i] = max(maxFreq[i], freq1[i]);
            }
        }
        for (const string& word1 : words1) {
            vector<int> freq2(26, 0);
            for (const char& c : word1) {
                freq2[c - 'a']++;
            }
            bool universal = true;
            for (int i = 0; i < 26; i++) {
                if (freq2[i] < maxFreq[i]) {
                    universal = false;
                    break;
                }
            }
            if (universal)
                res.push_back(word1);
        }

        return res;
    }
};