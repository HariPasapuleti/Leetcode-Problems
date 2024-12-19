class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {

        long long sum1 = 0, sum2 = 0, n = arr.size(), chunk = 0;
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        for (int i = 0; i < n; i++) {
            sum1 += arr[i];
            sum2 += temp[i];
            if (sum1 == sum2)
                chunk++;
        }
        return chunk;
    }
};