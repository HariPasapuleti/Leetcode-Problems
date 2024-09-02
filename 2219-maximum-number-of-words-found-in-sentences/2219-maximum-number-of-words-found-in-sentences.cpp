class Solution {
public:
    int mostWordsFound(vector<string>& s) {

        int max_count = 0;
        for (int i = 0; i < s.size(); i++) {
            int count = 0;
            for (int j = 0; j < s[i].size(); j++) {
                if (s[i][j] == ' ') {
                    count++;
                }
            }
            if (s[i].size() > 0)
                count++;
            max_count = max(max_count, count);
        }
        return max_count;
    }
};