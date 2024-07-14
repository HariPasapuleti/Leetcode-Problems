class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int height = 0, peak = 0;
        for(int i = 0; i < gain.size(); i++)
        {
            height += gain[i];
            peak = max(peak, height);
        }
        return peak;
    }
};