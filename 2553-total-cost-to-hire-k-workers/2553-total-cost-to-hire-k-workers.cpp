class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int c) {
        priority_queue<int, vector<int>, greater<int>> pq1, pq2;
        int n = costs.size();
        int left = 0, right = n - 1;
        for (int i = 0; i < c && left <= right; i++) {
            pq1.push(costs[left++]);
        }
        for (int i = 0; i < c && left <= right; i++) {
            pq2.push(costs[right--]);
        }
        long long res = 0;
        for (int i = 0; i < k; i++) {
            if (!pq1.empty() && (pq2.empty() || pq1.top() <= pq2.top())) {
                res += pq1.top();
                pq1.pop();
                if (left <= right)
                    pq1.push(costs[left++]);
            } else if (!pq2.empty()) {
                res += pq2.top();
                pq2.pop();
                if (left <= right)
                    pq2.push(costs[right--]);
            }
        }
        return res;
    }
};