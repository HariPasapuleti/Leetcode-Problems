class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long, vector<long>, greater<long>> pq;
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }
        while (pq.top() < k) {
            long small = pq.top();
            pq.pop();
            long temp = small * 2 + pq.top();
            pq.pop();
            pq.push(temp);
            res++;
        }
        return res;
    }
};