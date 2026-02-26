class Solution {
public:
    int numSteps(string s) {
        int count = 0, carry = 0;
        for (int i = s.size() - 1; i > 0; i--) {
            int bit = (s[i] - '0') + carry;
            if (bit == 0 || bit == 2) {
                count++;
            } else {
                count += 2;
                carry = 1;
            }
        }
        return count + carry;
    }
};