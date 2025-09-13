class Solution {
public:
    int maxFreqSum(string s) {
        string vowels = "aeiou";
        unordered_map<char, int> alpha;
        int v_maxi = 0, c_maxi = 0;
        for (char ch : s) {
            alpha[ch]++;
            if (vowels.find(ch) != string::npos) {
                v_maxi = max(v_maxi, alpha[ch]);
            } else {
                c_maxi = max(c_maxi, alpha[ch]);
            }
        }
        return v_maxi + c_maxi;
    }
};