class Solution {
public:
    bool scoreBalance(string s) {

        int total = 0, sum = 0;
        for (int i = 0; i < s.size(); i++) {
            total += s[i] - 'a' + 1;
        }
        for (int i = 0; i < s.size(); i++) {
            sum += s[i] - 'a' + 1;
            total -= s[i] - 'a' + 1;
            if (total == sum)
                return true;
        }
        return false;
    }
};