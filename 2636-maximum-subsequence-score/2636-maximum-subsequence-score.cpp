class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int, int>> vec;
        for (int i = 0; i < nums1.size(); i++) {
            vec.push_back({nums2[i], nums1[i]});
        }
        sort(vec.begin(), vec.end());
        priority_queue<int, vector<int>, greater<int>> pq;
        long long sum = 0, res = 0;
        for (int i = nums1.size() - 1; i >= 0; i--) {
            pq.push(vec[i].second);
            sum += vec[i].second;
            if (pq.size() > k) {
                sum -= pq.top();
                pq.pop();
            }
            if (pq.size() == k) {
                res = max(res, sum * vec[i].first);
            }
        }
        return res;
    }
};