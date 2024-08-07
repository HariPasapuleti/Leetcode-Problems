class Solution {
public:
    int divide(int dividend, int divisor) {

        if(dividend == divisor) return 1;
        
        bool sign = true;
        if(dividend < 0 && divisor > 0) sign = false;
        else if(dividend > 0 && divisor < 0) sign = false;

        long a = abs(dividend), b = abs(divisor);

        int result = 0;
        while(a >= b)
        {
            int count = 0;
            while(a >= (b << (count+1))) count++;

            a -= b << count;
            result += 1 << count;
        }

        if(result == 1 << 31 && sign == false) return INT_MIN;
        if(result == 1 << 31 && sign == true) return INT_MAX;

        return sign ? result : (-1 * result);


    }
};