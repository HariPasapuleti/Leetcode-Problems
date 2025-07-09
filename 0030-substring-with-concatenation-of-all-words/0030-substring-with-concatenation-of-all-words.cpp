class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        unordered_map<string, int> freq;
        for (auto& word : words) {
            freq[word]++;
        }

        int wordSize = words[0].size();
        int window_size = words.size() * wordSize;
        vector<int> res;

        if (s.size() < window_size)
            return res;

        int start = 0;
        while (start < wordSize) {
            for (int startPos = start; startPos <= s.size() - window_size;
                 startPos += wordSize) {
                unordered_map<string, int> curr_map;
                for (int j = startPos; j < startPos + window_size;
                     j += wordSize) {
                    string curr_word = s.substr(j, wordSize);
                    curr_map[curr_word]++;
                }
                if (curr_map == freq) {
                    res.push_back(startPos);
                }
            }
            start++;
        }

        return res;
    }
};
