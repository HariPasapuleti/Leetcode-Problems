class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();
        double res = 0;
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    res = max(res, area(points[i], points[j], points[k]));
                }
            }
        }
        return res;
    }

    double area(vector<int>& p, vector<int>& q, vector<int>& r) {
        return abs(p[0] * (q[1] - r[1]) +
                   q[0] * (r[1] - p[1]) +
                   r[0] * (p[1] - q[1])) / 2.0;
    }
};