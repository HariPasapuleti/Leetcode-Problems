class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int res = 0, rows = grid.size(), cols = grid[0].size();
        vector<int> rowCount(rows, 0), colCount(cols, 0);
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    rowCount[i]++;
                    colCount[j]++;
                }
            }
        }

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    if (rowCount[i] > 1 || colCount[j] > 1)
                        res++;
                }
            }
        }
        return res;
    }

    bool isComRow(vector<vector<int>> grid, int row, int col) {
        int computers = 0;
        for (int i = 0; i < grid[0].size(); i++) {
            if (grid[row][i] == 1)
                computers++;
        }
        return computers >= 2;
    }

    bool isComCol(vector<vector<int>> grid, int row, int col) {
        int computers = 0;
        for (int i = 0; i < grid.size(); i++) {
            if (grid[i][col] == 1)
                computers++;
        }
        return computers >= 2;
    }
};