class Solution {
public:
    int countOdds(int low, int high) {

        int res = 0;
        if (low % 2 != 0 && high % 2 != 0) {
            res++;
        }
        return (high - low + 1) / 2 + res;
    }
};