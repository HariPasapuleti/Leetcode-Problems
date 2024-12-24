class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {

        // vector<vector<bool>> visited(maze.size(),
        //   vector<int>(maze[0].size(), 0));
        // visited[entrance[0]][entrance[1]] = true;
        queue<pair<int, int>> q;
        int level = 1;
        q.push({entrance[0], entrance[1]});
        maze[entrance[0]][entrance[1]]='+';
        vector<vector<int>> offset = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        while (!q.empty()) {
            int n = q.size();
            for (int i = 0; i < n; i++) {
                int x = q.front().first, y = q.front().second;
                q.pop();
                for (int j = 0; j < 4; j++) {
                    int row = x + offset[j][0];
                    int col = y + offset[j][1];
                    if (row < 0 || col < 0 || row >= maze.size() ||
                        col >= maze[0].size() || maze[row][col] == '+')
                        continue;
                    if (row == 0 || col == 0 || row == maze.size() - 1 ||
                        col == maze[0].size()-1)
                        return level;
                    maze[row][col] = '+';
                    q.push({row, col});
                }
            }
            level++;
        }
        return -1;
    }
};