class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size(), ind = 0;
        while (ind < n - 1) {
            ind += bits[ind] + 1;
        }
        return ind == n - 1;
    }
};