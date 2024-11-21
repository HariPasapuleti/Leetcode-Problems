class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards,
                       vector<vector<int>>& walls) {

        vector<vector<int>> board(m, vector<int>(n, 0));
        for (int i = 0; i < walls.size(); i++) {
            board[walls[i][0]][walls[i][1]] = 2;
        }

        for(int i=0;i<guards.size();i++)
        {
            board[guards[i][0]][guards[i][1]] = 1;
        }
        
        for (int i = 0; i < guards.size(); i++) {
            check(m, n, board, guards[i][0], guards[i][1]);
        }

        int res = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 0)
                    res++;
            }
        }
        return res;
    }

    void check(int m, int n, vector<vector<int>>& board, int row, int col) {
        for (int i = col-1; i >= 0; i--) // Left check
        {
            if (board[row][i] == 2 || board[row][i] == 1) {
                break;
            } else {
                board[row][i] = -1;
            }
        }
        for (int i = col+1; i < n; i++) // right check
        {
            if (board[row][i] == 2 || board[row][i] == 1)
                break;
            else {
                board[row][i] = -1;
            }
        }
        for (int i = row-1; i >= 0; i--) // up check
        {
            if (board[i][col] == 2 || board[i][col] == 1)
                break;
            else {
                board[i][col] = -1;
            }
        }
        for (int i = row+1; i < m; i++) // down check
        {
            if (board[i][col] == 2 || board[i][col] == 1)
                break;
            else {
                board[i][col] = -1;
            }
        }
        return;
    }
};