class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

        int drinking_bottles = numBottles;
        int new_water_bottles = numBottles / numExchange;
        
        while(new_water_bottles > 0)
        {
            numBottles -= new_water_bottles * numExchange;
            numBottles += new_water_bottles;
            drinking_bottles += new_water_bottles;
            new_water_bottles = numBottles / numExchange;
        }
        return drinking_bottles;
    }
};