class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitudes;
        int altitude = 0;
        altitudes.push_back(0);
        for(int i = 0; i < gain.size(); i++) 
        {
            altitude += gain[i];
            altitudes.push_back(altitude);
        }
        sort(altitudes.begin(), altitudes.end());
        return altitudes[gain.size()];
    }
};