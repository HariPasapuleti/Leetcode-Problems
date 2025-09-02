class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {

        int res = 2, n = points.size();
        if (n <= 2)
            return n;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int count = 2;
                int dx_i = points[i][0] - points[j][0];
                int dy_i = points[i][1] - points[j][1];
                for (int k = 0; k < n; k++) {
                    if (k != i && k != j) {
                        int dx_k = points[k][1] - points[j][1];
                        int dy_k = points[k][0] - points[j][0];
                        if (dx_i * dx_k == dy_k * dy_i) {
                            count++;
                        }
                    }
                }
                res = max(res, count);
            }
        }
        return res;
    }
};