class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {

        long long n = gifts.size(), res = 0, ind = 0;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++) {
            pq.push(gifts[i]);
            res += gifts[i];
        }
        while (k--) {
            int v = pq.top();
            res -= (v - sqrt(v));
            pq.pop();
            pq.push(sqrt(v));
        }
        return res;
    }
};