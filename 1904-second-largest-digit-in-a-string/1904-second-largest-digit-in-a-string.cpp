class Solution {
public:
    int secondHighest(string s) {
        // vector<int> nums_store(10, 0);

        int first_max = -1, second_max = -1;
        for (auto str : s) {
            if (isdigit(str)) {
                int digit = str - '0';
                if (digit > first_max) {
                    second_max = first_max;
                    first_max = digit;
                } else if (digit > second_max && digit < first_max) {
                    second_max = digit;
                }
            }
        }

        return second_max;
        // sort(nums_store.begin(), nums_store.end(),
        //      [](const pair<int, int>& a, const pair<int, int>& b) {
        //          return a.second > b.second;
        //      });

        // return (nums_store[1].second > 0) ? nums_store[1].first : -1;
    }
};