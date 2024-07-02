class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int odd_count = 0;
        for(int num : arr)
        {
            if(num % 2 == 1) odd_count += 1;
            else odd_count = 0;

            if(odd_count == 3) return true;
        }
        return false;
    }
};