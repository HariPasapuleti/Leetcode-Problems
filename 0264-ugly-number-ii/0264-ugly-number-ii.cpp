class Solution {
public:
    int nthUglyNumber(int n) {

        vector<int> vec(n + 1);
        vec[1] = 1;
        int t2 = 1, t3 = 1, t5 = 1;

        for (int i = 2; i <= n; i++) {
            int second = vec[t2] * 2, third = vec[t3] * 3, fifth = vec[t5] * 5;

            vec[i] = min({second, third, fifth});

            if (vec[i] == second)
                t2++;
            if (vec[i] == third)
                t3++;
            if (vec[i] == fifth)
                t5++;
        }

        return vec[n];
    }
};