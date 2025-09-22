class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        int res = 0, count = 0;
        for (int num : nums) {
            freq[num]++;
        }
        for (auto fr : freq) {
            if (fr.second == count) {
                res += count;
            } else if (fr.second > count) {
                count = fr.second;
                res = count;
            }
        }
        return res;
    }
};