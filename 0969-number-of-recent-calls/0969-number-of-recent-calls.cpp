class RecentCounter {
public:

    queue<int> queue1;
    RecentCounter() {
        
    }
    
    int ping(int t) {

        int lower = t - 3000;
        queue1.push(t);
        while(lower > queue1.front())
        {
            queue1.pop();
        }

        
        return queue1.size();
        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */