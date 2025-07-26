class Solution {
public:
    char findTheDifference(string s, string t) {

        unordered_map<char, int> mp;
        for (char ch : s) {
            mp[ch]++;
        }

        for (char ch : t) {
            if (mp[ch] != 0) {
                mp[ch]--;
            } else
                return ch;
        }
        return ' ';
    }
};