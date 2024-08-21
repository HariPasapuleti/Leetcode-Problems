class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {

        unordered_map<char, int> freq1, freq2;

        for(auto& ch : word1)
        {
            freq1[ch - 'a']++;
            // if(freq1[ch - 'a'] == 4) return false;
        }

        for(auto& ch : word2)
        {
            freq2[ch - 'a']++;
            // if(freq2[ch - 'a'] == 4) return false;
        }

        for(int i = 0; i < 26; i++)
        {
            if(abs(freq1[i] - freq2[i]) > 3) return false;
        }

        return true;
        
    }
};