class Solution {
public:
    int minimumDeletions(string s) {

        int n = s.size(), left_b = 0,total_a=0;
        stack<char> st;
        for(auto letter : s)
        {
            if(letter=='a') total_a++;
        }

        int min_deletions= total_a;
        for(auto ch : s)
        {
            if(ch =='b') {
                left_b++;
            }
            else {
                total_a--;
            }

            min_deletions = min(min_deletions, left_b+total_a);
        }
        return min_deletions;
        
        
    }
};