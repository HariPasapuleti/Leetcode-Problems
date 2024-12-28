class StockSpanner {
public:
    stack<pair<int, int>> st1;
    StockSpanner() {
        // stack<int> st1,st2;
    }

    int next(int price) {
        int res = 1;
        while (!st1.empty() && price >= st1.top().first) {
            res += st1.top().second;
            st1.pop();
        }
        st1.push({price, res});
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */