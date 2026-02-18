class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool last=n%2;
        n/=2;
        while(n>0) {
            bool dig=n%2;
            if(dig==last) {
                return false;
            } else {
                last=dig;
            }
            n/=2;
        }
        return true;
    }
};