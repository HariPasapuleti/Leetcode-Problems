class Solution {
public:
    int minSteps(int n) {
        // if (n == 1)
        //     return 0;
        // if (isPrime(n))
        //     return n;

        int steps = 0, factor = 2;

        while (n > 1) {
            while (n % factor == 0) {
                steps += factor;
                n /= factor;
            }
            factor++;
        }

        return steps;
    }

// private:
//     bool isPrime(int n) {
//         if (n == 0 || n == 1)
//             return false;
//         if (n == 2 || n == 3)
//             return true;
//         if (n % 2 == 0 || n % 3 == 0)
//             return false;

//         for (int i = 5; i * i <= n; i += 6) {
//             if (n / i == 0)
//                 return false;
//         }
//         return true;
//     }
};