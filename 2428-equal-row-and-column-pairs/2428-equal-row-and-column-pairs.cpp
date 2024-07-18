class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {

        vector<vector<int>> column;
        vector<int> temp;

        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                temp.push_back(grid[j][i]);
            }
            column.push_back(temp);
            temp.clear();
        }

        int count = 0;

        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i] == column[j]) {
                    count++;
                }
            }
        }
        return count;

    }
};