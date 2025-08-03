class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        int top = 0, bottom = n - 1, left = 0, right = n - 1, num = 1;
        vector<vector<int>> matrix(n, vector<int>(n, 0));

        while (top <= bottom && left <= right) {
            for (int j = left; j <= right; j++) {
                matrix[top][j] = num++;
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                matrix[i][right] = num++;
            }
            right--;
            for (int j = right; j >= left; j--) {
                matrix[bottom][j] = num++;
            }
            bottom--;
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = num++;
            }
            left++;
        }
        return matrix;
    }
};