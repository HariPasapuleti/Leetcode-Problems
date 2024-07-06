class Solution {
public:
    int passThePillow(int n, int time) {

        int round_no = 0, remaining_time = time;

        if(time == 0) return time;
        else if(time < n) return time + 1;

        while(true)
        {
            if(remaining_time > n - 1) {
                remaining_time -= n - 1;
                round_no++;
                continue;
            }
            
            if(round_no % 2 == 0) {
                return remaining_time + 1;
            }
            else {
                return (n - remaining_time);
            }
        }        
    }
};