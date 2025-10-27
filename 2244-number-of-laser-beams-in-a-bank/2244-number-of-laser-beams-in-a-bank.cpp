class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int res = 0, beams = 0;
        for (int i = 0; i < bank.size(); i++) {
            int temp_beams = 0;
            for (auto block : bank[i]) {
                if (block == '1') {
                    temp_beams++;
                }
            }
            if (beams != 0) {
                res += beams * temp_beams;
            }
            if (temp_beams != 0) {
                beams = temp_beams;
            }
        }
        return res;
    }
};