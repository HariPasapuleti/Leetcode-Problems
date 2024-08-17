class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {

        // Using Dynamic programming.
        int n = points.size(), m = points[0].size();
        vector<long> dp(m, 0);
        long res = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                dp[j] += points[i][j];
            }

            for (int j = 1; j < m; j++) {
                dp[j] = max(dp[j], dp[j - 1] - 1);
            }

            for (int j = m - 2; j >= 0; j--) {
                dp[j] = max(dp[j], dp[j + 1] - 1);
            }
        }

        for (int i = 0; i < m; i++) {
            res = max(res, dp[i]);
        }

        return res;

        // Partially executed
        // int total =  0, index_store = 0;
        // for(int i=0;i<points.size();i++)
        // {
        //     int max_element = points[i][0], index = 0;
        //     for(int j=0;j<points[0].size();j++)
        //     {
        //         if(points[i][j] > max_element) {
        //             max_element = max(max_element, points[i][j]);
        //             index = j;
        //         }
        //         else if(points[i][j] == max_element) {
        //             if(abs(index - index_store) > abs(j - index_store)) {
        //                 index = j;
        //             }
        //         }

        //     }

        //     total += max_element;
        //     if(i>0) total -= abs(index_store - index);
        //     index_store = index;
        // }

        // return total;
    }
};