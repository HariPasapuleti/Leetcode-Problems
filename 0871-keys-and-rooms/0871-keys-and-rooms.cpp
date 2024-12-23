class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {

        unordered_map<int,int> mp;
        queue<int> q;
        for(int i=0;i<rooms[0].size();i++) {
            q.push(rooms[0][i]);
        }
        while(!q.empty()) {
            int ind=q.front();
            q.pop();
            if(ind==0) continue;
            if(mp.find(ind)==mp.end()){
                mp[ind]=1;
                for(int i=0;i<rooms[ind].size();i++) {
                    q.push(rooms[ind][i]);
                }
            }
        }
        return mp.size()==rooms.size()-1;
    }
};