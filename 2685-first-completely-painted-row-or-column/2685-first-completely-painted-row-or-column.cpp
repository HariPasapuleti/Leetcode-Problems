class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        vector<int> rowCount(mat.size()), colCount(mat[0].size());
        unordered_map<int, pair<int, int>> mp;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                int val = mat[i][j];
                mp[val] = {i, j};
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            int num = arr[i];
            auto [row, col] = mp[num];
            rowCount[row]++;
            colCount[col]++;
            if (rowCount[row] == mat[0].size() || colCount[col] == mat.size())
                return i;
        }
        return -1;
    }
};