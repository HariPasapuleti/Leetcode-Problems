class Solution {
public:
    int maximum69Number(int num) {
        int count = 1, temp = num, ind = 0;
        while (temp != 0) {
            if (temp % 10 == 6) {
                ind = count;
            }
            temp /= 10;
            count *= 10;
        }
        return num + ind * 3;
    }
};