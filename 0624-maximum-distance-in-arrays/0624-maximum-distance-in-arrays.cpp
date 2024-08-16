class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {

        int low = arrays[0][0], high = arrays[0].back(), max_distance = 0;

        for (int i = 1; i < arrays.size(); i++) {

            max_distance = max(max_distance, abs(arrays[i].back() - low));
            max_distance = max(max_distance, abs(high - arrays[i][0]));

            low = min(low, arrays[i][0]);
            high = max(high, arrays[i].back());
        }

        return max_distance;

        // for (int i = 0; i < arrays.size(); i++) {
        //     int n = arrays[i].size();
        //     int low = arrays[i][0];
        //     int high = arrays[i][n - 1];
        //     // cout << n << low << high << endl;
        //     min_element = min(min_element, low);
        //     max_element = max(max_element, high);
        // }

        // return abs(min_element - max_element);
    }
};