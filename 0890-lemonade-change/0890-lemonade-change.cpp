class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int fiveDollorCoins = 0, tenDollorCoins = 0;
        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                fiveDollorCoins++;
            } else if (bills[i] == 10) {
                fiveDollorCoins--;
                tenDollorCoins++;
            } else {
                fiveDollorCoins--;
                if (tenDollorCoins == 0) {
                    fiveDollorCoins -= 2;
                } else {
                    tenDollorCoins--;
                }
            }

            if (fiveDollorCoins < 0 || tenDollorCoins < 0)
                return false;
        }
        return true;
    }
};