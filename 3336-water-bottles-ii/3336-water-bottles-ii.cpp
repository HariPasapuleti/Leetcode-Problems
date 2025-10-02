class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {

        int res = numBottles;
        for (int empty_bottles = numBottles; empty_bottles >= numExchange;
             numExchange++) {
            res++;
            empty_bottles -= numExchange - 1;
        }
        return res;
    }
};