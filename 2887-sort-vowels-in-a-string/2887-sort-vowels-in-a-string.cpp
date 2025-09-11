class Solution {
public:
    string sortVowels(string s) {
        vector<char> vec_vowel;
        vector<int> ind;
        string vowels = "AEIOUaeiou";
        for (int i = 0; i < s.size(); i++) {
            if (vowels.find(s[i]) != string::npos) {
                vec_vowel.push_back(s[i]);
                ind.push_back(i);
            }
        }
        sort(vec_vowel.begin(), vec_vowel.end());
        for (int i = 0; i < ind.size(); i++) {
            s[ind[i]] = vec_vowel[i];
        }
        return s;
    }
};