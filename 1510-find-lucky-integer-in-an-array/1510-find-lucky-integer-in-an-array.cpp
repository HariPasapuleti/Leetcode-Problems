class Solution {
public:
    int findLucky(vector<int>& arr) {

        vector<int> freq(501, 0);
        int lucky = -1;
        for (int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }
        for (int i = 0; i < arr.size(); i++) {
            if (freq[arr[i]] == arr[i])
                lucky = max(lucky, arr[i]);
        }
        return lucky;
    }
};