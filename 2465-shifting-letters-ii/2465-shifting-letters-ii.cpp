class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> diff(s.size() + 1, 0), shiftCount(s.size(), 0);
        for (auto& shift : shifts) {
            if (shift[2] == 1) {
                diff[shift[0]]++;
                if (shift[1] + 1 < n) {
                    diff[shift[1] + 1]--;
                }
            } else {
                diff[shift[0]]--;
                if (shift[1] + 1 < n) {
                    diff[shift[1] + 1]++;
                }
            }
        }
        int cSum = 0;
        for (int i = 0; i < s.size(); i++) {
            cSum += diff[i];
            shiftCount[i] = cSum;
        }

        for (int i = 0; i < s.size(); i++) {
            // cout << shiftCount[i] << " ";
            int num = (s[i] - 'a' + shiftCount[i]) % 26;
            if (num < 0) {
                num += 26;
            }
            s[i] = 'a' + num;
        }
        return s;
    }
};