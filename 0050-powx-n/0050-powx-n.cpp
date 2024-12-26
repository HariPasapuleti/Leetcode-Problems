class Solution {
public:
    double myPow(double x, int n) {
        long pov = n;
        if (pov < 0)
            pov = pov * -1;
        double res = 1.0;
        while (pov > 0) {
            if (pov % 2 == 1) {
                res *= x;
                pov--;
            } else {
                x *= x;
                pov /= 2;
            }
        }
        if (n < 0)
            return 1 / res;
        return res;
    }
};