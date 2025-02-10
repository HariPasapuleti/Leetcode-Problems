class Solution {
public:
    string clearDigits(string s) {
        // string res = "";
        int ansLen = 0;
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                ansLen = max(ansLen - 1, 0);
            } else {
                s[ansLen++] = s[i];
            }
        }
        s.resize(ansLen);
        return s;
    }
};