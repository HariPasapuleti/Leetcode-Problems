class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res = numBottles, full_bottles = 0, empty_bottles = 0;
        while (numBottles >= numExchange) {
            full_bottles = numBottles / numExchange;
            empty_bottles = numBottles % numExchange;
            numBottles = full_bottles + empty_bottles;
            res += full_bottles;
        }
        return res;
    }
};