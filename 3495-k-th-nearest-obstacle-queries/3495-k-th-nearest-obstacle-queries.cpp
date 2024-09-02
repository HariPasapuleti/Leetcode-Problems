class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& quer, int k) {

        priority_queue<int> pq;
        vector<int> ans;
        int n = quer.size();
        for (int i = 0; i < n; i++) {
            pq.push(abs(quer[i][0]) + abs(quer[i][1]));
            if (pq.size() > k)
                pq.pop();
            if (pq.size() == k)
                ans.push_back(pq.top());
            else
                ans.push_back(-1);
        }
        return ans;

        // vector<int> res;
        // if (queries.size() < k) {
        //     int n = queries.size();
        //     while (n--) {
        //         res.push_back(-1);
        //     }
        //     return res;
        // }

        // int temp = k - 1;
        // while (temp--) {
        //     res.push_back(-1);
        // }
        // int sum = 0;
        // for (auto query : queries) {
        //     sum = abs(query[0]) + abs(query[1]);
        //     res.push_back(sum);
        // }

        // temp = k - 1;
        // while (temp--) {
        //     int min_element = res[k-1], index = k-1;
        //     for (int i = k-1; i < res.size(); i++) {
        //         if (res[i] < min_element) {
        //             min_element=res[i];
        //             index = i;
        //         }
        //     }
        //     res.erase(res.begin() + index);
        // }

        // return res;
    }
};