class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string target = orderedString(n);
        for (int i = 0; i < 32; i++) {
            if (orderedString(1 << i) == target)
                return true;
        }
        return false;
    }

    string orderedString(int num) {
        string str_num = to_string(num);
        sort(str_num.begin(), str_num.end());
        return str_num;
    }
};