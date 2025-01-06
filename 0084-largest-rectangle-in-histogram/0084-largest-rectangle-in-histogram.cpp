class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nse(n, 0), pse(n, 0);
        nse = nsee(heights);
        pse = psee(heights);
        int total = 0;
        for (int i = 0; i < n; i++) {
            // cout << pse[i] << " " << nse[i] << endl;
            total = max(total, (nse[i] - pse[i] - 1) * heights[i]);
        }
        return total;
    }

    vector<int> psee(vector<int> heights) {
        vector<int> suffix(heights.size(), 0);
        stack<int> st;
        for (int i = 0; i < heights.size(); i++) {
            while (!st.empty() && heights[i] <= heights[st.top()])
                st.pop();
            suffix[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return suffix;
    }

    vector<int> nsee(vector<int> heights) {
        vector<int> prefix(heights.size(), 0);
        stack<int> st;
        // prefix[heights.size() - 1] = heights[heights.size() - 1];
        for (int i = heights.size() - 1; i >= 0; i--) {
            while (!st.empty() && heights[i] <= heights[st.top()])
                st.pop();
            prefix[i] = st.empty() ? heights.size() : st.top();
            st.push(i);
        }
        return prefix;
    }
};