class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        double max_avg = -INFINITY, avg = 0, total = 0;
        if(k > nums.size()) return 0;

        while(i  < nums.size())
        {
            total += nums[i];
            if(i >= k - 1) {
                avg = total / k;
                max_avg = max(max_avg, avg);
                total -= nums[i - k + 1];
            }
            i++;
        }
        return max_avg;
    }
};