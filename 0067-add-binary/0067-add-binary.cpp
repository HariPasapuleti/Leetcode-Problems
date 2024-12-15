class Solution {
public:
    string addBinary(string a, string b) {

        if (a.size() < b.size())
            return addBinary(b, a);
        int i = a.size() - 1, carry = 0;
        string res = "";
        while (i >= 0) {
            int sum = a[i] - '0' + carry;
            if (i >= a.size() - b.size())
                sum += b[i - (a.size() - b.size())] - '0';
            cout << sum << " ";
            if (sum == 2 || sum == 3) {
                res = (sum == 3) ? '1' + res : '0' + res;
                carry = 1;
            } else {
                res = (sum == 1) ? '1' + res : '0' + res;
                carry = 0;
            }
            i--;
        }
        if (carry == 1)
            res = '1' + res;
        return res;
    }
};