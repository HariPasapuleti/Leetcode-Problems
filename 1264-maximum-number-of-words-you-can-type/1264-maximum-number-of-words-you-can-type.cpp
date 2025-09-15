class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int res = 0, n = text.size(), flag = 1;
        unordered_map<char, int> bl;
        for (int i = 0; i < brokenLetters.size(); i++) {
            bl[brokenLetters[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (text[i] == ' ') {
                res += flag;
                flag = 1;
            } else if (bl.find(text[i]) != bl.end()) {
                flag = 0;
            }
        }
        return res + flag;
    }
};