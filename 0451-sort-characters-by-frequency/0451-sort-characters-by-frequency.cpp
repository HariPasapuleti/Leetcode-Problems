class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> mp;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        vector<pair<char, int>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), cmp);

        string res = "";

        for (auto i = 0; i < vec.size(); i++) {
            res += string(vec[i].second, vec[i].first);
        }

        return res;
    }

    static bool cmp(pair<char, int> a, pair<char, int> b) {
        if (a.second == b.second)
            return a.first > b.first;
        return a.second > b.second;
    }
};