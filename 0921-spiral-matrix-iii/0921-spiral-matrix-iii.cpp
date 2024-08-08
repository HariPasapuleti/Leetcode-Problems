class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rstart, int cstart) {
        int row = 1;
        int col = 1;
        vector<vector<int>> res;
        int total = rows * cols;

        int x = rstart;
        int y = cstart;

        while (res.size() < total) {
            // Move right
            for (int i = x; res.size() < total && i < row + x; i++) {
                if (x >= 0 && x < rows && y >= 0 && y < cols) {
                    res.push_back({x, y});
                }
                y++;
            }
            row++;

            // Move down
            for (int i = y; res.size() < total && i < y + col; i++) {
                if (x >= 0 && x < rows && y >= 0 && y < cols) {
                    res.push_back({x, y});
                }
                x++;
            }
            col++;

            // Move left
            for (int i = x; res.size() < total && i > x - row; i--) {
                if (x >= 0 && x < rows && y >= 0 && y < cols) {
                    res.push_back({x, y});
                }
                y--;
            }
            row++;

            // Move up
            for (int i = y; res.size() < total && i > y - col; i--) {
                if (x >= 0 && x < rows && y >= 0 && y < cols) {
                    res.push_back({x, y});
                }
                x--;
            }
            col++;
        }
        return res;
    }
};