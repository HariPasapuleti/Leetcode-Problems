class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {

        int top = 0, side = 0, front = 0;

        for (int i = 0; i < grid.size(); i++) {

            int row_max_element = 0, column_max_element = 0;
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] != 0)
                    top++;

                row_max_element = max(row_max_element, grid[i][j]);
                column_max_element = max(column_max_element, grid[j][i]);
            }
            
            side += row_max_element;
            front += column_max_element;
        }

        return top + side + front;
    }
};