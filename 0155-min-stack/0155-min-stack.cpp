class MinStack {
public:
    stack<int> st1;
    map<int, int> mp;
    stack<pair<int, int>> st2;
    MinStack() {}

    void push(int val) {
        if (st2.empty())
            st2.push({val, val});
        else
            st2.push({val, min(st2.top().second, val)});
        // st.push(val);
        // mp[val]++;
    }

    void pop() {
        // mp[st.top()]--;
        // if (mp[st.top()] == 0)
        //     mp.erase(st.top());
        st2.pop();
    }

    int top() { return st2.top().first; }

    int getMin() { return st2.top().second; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */