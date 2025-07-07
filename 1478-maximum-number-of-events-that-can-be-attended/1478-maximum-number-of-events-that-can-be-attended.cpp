class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {

        int last_day = 0, attendable_events = 0, n = events.size();
        for (int i = 0; i < n; i++) {
            last_day = max(last_day, events[i][1]);
        }
        sort(events.begin(), events.end());
        priority_queue<int, vector<int>, greater<>> pq;

        for (int i = 0, j = 0; i <= last_day; i++) {
            // cout << j << " ";
            while (j < n && events[j][0] <= i) {
                pq.emplace(events[j][1]);
                j++;
            }
            while (!pq.empty() && pq.top() < i) {
                pq.pop();
            }
            if (!pq.empty()) {
                pq.pop();
                attendable_events++;
            }
        }
        return attendable_events;
    }
};