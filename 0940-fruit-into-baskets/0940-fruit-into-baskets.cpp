class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> freq;
        int left = 0, res = 0, curr_res = 0;
        for (int right = 0; right < fruits.size(); right++) {
            curr_res = 0;
            freq[fruits[right]]++;
            while (freq.size() > 2) {
                freq[fruits[left]]--;
                if (freq[fruits[left]] == 0)
                    freq.erase(fruits[left]);
                left++;
            }
            for (auto f : freq) {
                curr_res += f.second;
            }
            res = max(res, curr_res);
        }
        return res;
    }
};