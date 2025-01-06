class Solution {
public:
    vector<int> minOperations(string boxes) {
        int prefix = 0, suffix = 0;
        int prefixOnes = 0, suffixOnes = 0;
        for (int i = 1; i < boxes.size(); i++) {
            if (boxes[i] == '1') {
                prefix += i;
                prefixOnes++;
            }
        }
        vector<int> res(boxes.size(), 0);
        res[0] = prefix;
        for (int i = 1; i < boxes.size(); i++) {
            if (boxes[i - 1] == '1')
                suffixOnes++;
            suffix += suffixOnes;
            prefix -= prefixOnes;
            if (boxes[i] == '1')
                prefixOnes--;
            res[i] = suffix + prefix;
        }
        return res;
    }
};