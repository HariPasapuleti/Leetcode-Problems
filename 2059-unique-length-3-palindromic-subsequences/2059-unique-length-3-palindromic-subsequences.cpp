class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size(), res = 0;
        // unordered_set<string> set;
        // string str = "";
        // func(n - 1, s, str, set);
        // return set.size();
        vector<int> first(26, -1), last(26, -1);
        for (int i = 0; i < n; i++) {
            int curr = s[i] - 'a';
            if (first[curr] == -1)
                first[curr] = i;
            last[curr] = i;
        }

        for (int i = 0; i < 26; i++) {
            if (first[i] == -1)
                continue;

            unordered_set<char> letters;
            for (int j = first[i] + 1; j < last[i]; j++) {
                letters.insert(s[j]);
            }
            res += letters.size();
        }
        return res;
    }

    void func(int ind, string s, string str, unordered_set<string>& set) {
        if (ind < 0) {
            if (str.size() == 3 && str[0] == str[2])
                set.insert(str);
            return;
        }
        func(ind - 1, s, str + s[ind], set);
        func(ind - 1, s, str, set);
    }
};