class Solution {
public:
    int minLength(string s) {

        int n = s.size(), i = 0;
        while (i < s.size() - 1) {
            if ((i != n - 1) && (s[i] == 'A' && s[i + 1] == 'B') ||
                (s[i] == 'C' && s[i + 1] == 'D')) {
                s.erase(i, 2);
                if (s.size() == 0)
                    return 0;
                if (i > 0)
                    i--;
            } else
                i++;
        }
        return s.size();
    }
};