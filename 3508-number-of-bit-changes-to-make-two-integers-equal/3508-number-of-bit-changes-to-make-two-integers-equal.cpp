class Solution {
public:
    int minChanges(int n, int k) {
        int res = 0, element = max(n, k);
        while (element > 0) {
            if (n % 2 == 0 && k % 2 == 1)
                return -1;
            if (n % 2 == 1 && k % 2 == 0)
                res++;
            element /= 2;
            k /= 2;
            n /= 2;
        }
        return res;
    }
};