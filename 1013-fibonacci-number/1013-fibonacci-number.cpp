class Solution {
public:
    int fib(int n) {
        if (n <= 1)
            return n;

        int last = fib(n - 1);
        int sLast = fib(n - 2);

        return last + sLast;
    }
};