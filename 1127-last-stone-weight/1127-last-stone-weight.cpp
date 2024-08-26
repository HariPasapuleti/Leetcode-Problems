class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int> pq;
        for (auto& stone : stones) {
            pq.push(stone);
        }

        while (!pq.empty()) {
            int a = pq.top();
            pq.pop();
            if (pq.empty())
                return a;

            int b = pq.top();
            pq.pop();

            if (a - b > 0)
                pq.push(a - b);
        }
        return 0;

        // while (stones.size() != 1) { //O(n^2log(n))
        //     sort(stones.begin(), stones.end(), greater<int>());

        //     int back = abs(stones[0] - stones[1]);
        //     stones.erase(stones.begin(), stones.begin() + 2);
        //     stones.push_back(back);
        // }
        // return stones[0];
    }
};