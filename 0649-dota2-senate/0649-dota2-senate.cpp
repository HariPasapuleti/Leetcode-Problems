class Solution {
public:
    string predictPartyVictory(string senate) {

        queue<int> radiant, dire;
        
        for(int i = 0; i < senate.length(); i++)
        {
            if(senate[i] == 'R') {
                radiant.push(i);
            }
            else {
                dire.push(i);
            }
        }

        int n = senate.length();
        while(!radiant.empty() && !dire.empty())
        {
            if(radiant.front() < dire.front()) {
                radiant.push(n++);
            }
            else {
                dire.push(n++);
            }
            radiant.pop();
            dire.pop();
        }
        if(!radiant.empty()) return "Radiant";
        else return "Dire";
        
    }
};