class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int unplaced = 0, n = fruits.size();

        for (int i = 0; i < n; i++) {
            bool placed = false;
            for (int j = 0; j < n; j++) {
                if (fruits[i] <= baskets[j]) {
                    baskets[j] = 0;
                    placed = true;
                    break;
                }
            }
            if (!placed)
                unplaced++;
        }
        return unplaced;
    }
};