class SmallestInfiniteSet {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    set<int> s;
    int curr;
    SmallestInfiniteSet() { curr = 1; }

    int popSmallest() {
        if (!pq.empty()) {
            int a = pq.top();
            pq.pop();
            s.erase(a);
            return a;
        } else {
            curr++;
            return curr - 1;
        }
    }

    void addBack(int num) {
        if (curr > num && s.find(num)==s.end()) {
            pq.push(num);
            s.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */