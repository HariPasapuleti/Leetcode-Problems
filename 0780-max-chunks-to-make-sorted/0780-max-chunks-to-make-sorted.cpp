class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {

        int n = arr.size(), chunk = 0;
        vector<int> pref = arr, suff = arr;
        for (int i = 1; i < n; i++) {
            pref[i] = max(pref[i - 1], arr[i]);
        }
        for (int i = n - 2; i >= 0; i--) {
            suff[i] = min(suff[i + 1], arr[i]);
        }
        for (int i = 0; i < n; i++) {
            if (i == 0 || pref[i - 1] < suff[i])
                chunk++;
        }
        return chunk;
    }
};