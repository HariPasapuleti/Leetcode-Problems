class Solution {
public:
    map<vector<string>, int> mp;
    int totalNQueens(int n) {
        vector<vector<string>> res;
        string s(n, '.');
        vector<string> board(n, s);
        queen(0, n, board, res);
        return res.size();
    }

    void queen(int col, int n, vector<string>& board,
               vector<vector<string>>& res) {

        if (col == n) {
            res.push_back(board);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (isSafe(i, col, board, n)) {
                board[i][col] = 'Q';
                queen(col + 1, n, board, res);
                board[i][col] = '.';
            }
        }
    }

    bool isSafe(int row, int col, vector<string> board, int n) {
        int dupCol = col, dupRow = row;
        // top diagonal
        while (dupRow >= 0 && dupCol >= 0) {
            if (board[dupRow][dupCol] == 'Q')
                return false;
            dupRow--;
            dupCol--;
        }
        dupRow = row;
        dupCol = col;
        // Bottom diagonal
        while (dupRow < n && dupCol >= 0) {
            if (board[dupRow][dupCol] == 'Q')
                return false;
            dupRow++;
            dupCol--;
        }
        dupRow = row;
        dupCol = col;

        // left
        while (dupCol >= 0) {
            if (board[dupRow][dupCol] == 'Q')
                return false;
            dupCol--;
        }
        dupRow = row;
        dupCol = col;

        // right
        while (dupCol < n) {
            if (board[dupRow][dupCol] == 'Q')
                return false;
            dupCol++;
        }
        return true;
    }
};
