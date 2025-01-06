class Solution {
public:
    int mod = 1e9 + 7;
    long long subArrayRanges(vector<int>& nums) {
        return sumSubarrayMaxs(nums) - sumSubarrayMins(nums);
    }

    long long sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefix(n, 0), suffix(n, 0);
        long long total = 0;
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[i] < arr[st.top()])
                st.pop();
            suffix[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        while (!st.empty())
            st.pop();
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[i] <= arr[st.top()])
                st.pop();
            prefix[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        for (int i = 0; i < n; i++) {
            long long left = i - suffix[i], right = prefix[i] - i;
            total += left * right * arr[i];
        }
        return total;
    }

    long long sumSubarrayMaxs(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefix(n, 0), suffix(n, 0);

        long long total = 0;
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[i] > arr[st.top()])
                st.pop();
            suffix[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        while (!st.empty())
            st.pop();
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[i] >= arr[st.top()])
                st.pop();
            prefix[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        for (int i = 0; i < n; i++) {
            long long left = i - suffix[i], right = prefix[i] - i;
            total += left * right * arr[i];
        }
        return total;
    }
};