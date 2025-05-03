class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int top_swap = 0, bottom_swap = 0, swaps = INT_MAX;
        for (int freq_num = 1; freq_num <= 6; freq_num++) {
            top_swap = 0, bottom_swap = 0;
            for (int i = 0; i < tops.size(); i++) {
                if (tops[i] != freq_num && bottoms[i] != freq_num) {
                    top_swap = INT_MAX;
                    bottom_swap = INT_MAX;
                    break;
                }
                if (tops[i] != freq_num) {
                    top_swap++;
                }
                if (bottoms[i] != freq_num) {
                    bottom_swap++;
                }
            }
            swaps = min(swaps, min(top_swap, bottom_swap));
        }
        return swaps == INT_MAX ? -1 : swaps;
    }
};