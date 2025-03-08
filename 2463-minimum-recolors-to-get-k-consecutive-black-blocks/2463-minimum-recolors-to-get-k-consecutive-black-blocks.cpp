class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int noOfWhites = 0;
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W')
                noOfWhites++;
        }

        int i = 0, res = noOfWhites;
        for (int j = k; j < blocks.size(); j++) {
            if (blocks[j] == 'W')
                noOfWhites++;
            if (blocks[i++] == 'W')
                noOfWhites--;
            res = min(res, noOfWhites);
        }
        return res;
    }
};