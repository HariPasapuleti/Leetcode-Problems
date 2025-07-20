class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;
        for (string s : strs) {
            vector<int> count(26, 0);
            string str = "";
            for (int i = 0; i < s.size(); i++) {
                count[s[i] - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                str += count[i];
                str += "#";
            }
            mp[str].push_back(s);
        }

        vector<vector<string>> anagrams;
        for (auto [key, vec_str] : mp) {
            anagrams.push_back(vec_str);
        }
        return anagrams;
    }
};