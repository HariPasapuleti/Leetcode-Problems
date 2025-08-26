class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int max_area = 0, diag_len = 0;
        for (auto& dim : dimensions) {
            int length = dim[0], width = dim[1];
            int temp_diag = length * length + width * width;
            if (temp_diag > diag_len) {
                diag_len = temp_diag;
                max_area = length * width;
            } else if (temp_diag == diag_len) {
                max_area = max(max_area, length * width);
            }
        }
        return max_area;
    }
};