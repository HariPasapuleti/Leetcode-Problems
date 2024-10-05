class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        vector<int> alpha(26, 0), dup(26, 0);
        if (s1.size() > s2.size())
            return false;
        for (int i = 0; i < s1.size(); i++) {
            alpha[s1[i] - 'a']++;
            dup[s2[i] - 'a']++;
        }

        if (alpha == dup)
            return true;

        for (int i = s1.size(); i < s2.size(); i++) {
            dup[s2[i] - 'a']++;
            dup[s2[i - s1.size()] - 'a']--;

            if (alpha == dup)
                return true;
        }
        return false;
    }
};