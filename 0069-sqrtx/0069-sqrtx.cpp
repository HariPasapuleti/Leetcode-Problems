class Solution {
public:
    int mySqrt(int x) {

        if (x == 0 || x == 1)
            return x;

        int start = 1, mid = -1, end = x;

        while (start <= end) {
            mid = start + (end - start) / 2;

            if (mid == x / mid)
                return mid;
            else if (mid > x / mid)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return end;

        // for (long long i = 0; i <= x / 2 + 1; i++) {
        //     if (i * i == x)
        //         return i;
        //     if (i * i > x)
        //         return i - 1;
        // }
        return 1;
    }
};