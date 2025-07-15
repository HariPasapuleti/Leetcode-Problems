class Solution {
public:
    bool isValid(string word) {
        string vowels = "aeiouAEIOU";
        bool vowel = false, consonent = false;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] >= '0' && word[i] <= '9') {
                continue;
            }
            if (word[i] >= 'a' && word[i] <= 'z' ||
                word[i] >= 'A' && word[i] <= 'Z') {
                if (vowels.find(word[i]) != string::npos) {
                    vowel = true;
                } else {
                    consonent = true;
                }
            } else {
                return false;
            }
        }
        return vowel && consonent && word.size() >= 3;
    }
};