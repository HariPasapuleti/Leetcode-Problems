class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {

        int max_element = 0;
        for (int i = 0; i < matrix[0].size(); i++) {
            max_element = -1;
            for (int j = 0; j < matrix.size(); j++) {
                max_element = max(max_element, matrix[j][i]);
            }
            // cout << max_element << endl;
            for (int j = 0; j < matrix.size(); j++) {
                if (matrix[j][i] == -1) {
                    matrix[j][i] = max_element;
                }
            }
        }

        return matrix;
    }
};