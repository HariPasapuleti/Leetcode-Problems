class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {

        int m = box.size(), n = box[0].size();
        vector<vector<char>> res(n, vector<char>(m, '.'));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                res[j][m - i - 1] = box[i][j];
            }
        }

        for (int i = 0; i < m; i++) {
            int emptyRow = n - 1;
            for (int j = n - 1; j >= 0; j--) {
                if (res[j][i] == '#') {
                    res[j][i] = '.';
                    res[emptyRow--][i] = '#';
                } else if (res[j][i] == '*')
                    emptyRow = j - 1;
            }
        }
        return res;
    }
};