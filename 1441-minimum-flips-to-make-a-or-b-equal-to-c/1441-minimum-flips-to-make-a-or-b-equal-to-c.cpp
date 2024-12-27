class Solution {
public:
    int minFlips(int a, int b, int c) {

        int bits = 0;
        int maxi = max(a, max(b, c));
        while (maxi > 0) {

            if (c & 1) {
                if ((a & 1) == 0 && (b & 1) == 0)
                    bits++;
            } else {
                bits += (a & 1) + (b & 1);
            }
            cout << (c & 1) << " ";
            a = a >> 1;
            b = b >> 1;
            c = c >> 1;
            maxi = maxi >> 1;
        }
        return bits;
    }
};