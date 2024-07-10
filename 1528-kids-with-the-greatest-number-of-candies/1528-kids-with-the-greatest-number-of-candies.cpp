class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> resultant;
        int highest_candies = 0;
        for(int i = 0; i < candies.size(); i++)
        {
            highest_candies = max(highest_candies, candies[i]);
        }

        for(int j = 0; j < candies.size(); j++)
        {
            if(candies[j] + extraCandies >= highest_candies) resultant.push_back(true);
            else resultant.push_back(false);
        }
        return resultant;
    }
};