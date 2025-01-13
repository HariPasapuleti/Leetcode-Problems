class Solution {
public:
    int minimumLength(string s) {
        int n = s.size(), removableLen = 0;
        vector<int> freq(26, 0);
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            int frequency = freq[i];
            if (frequency % 2 != 0)
                removableLen += frequency - 1;
            else if (frequency != 0)
                removableLen += frequency - 2;
        }
        return n - removableLen;
    }
};