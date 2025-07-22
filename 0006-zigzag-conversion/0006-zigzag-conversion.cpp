class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows==1 || numRows>=s.size()) {
            return s;
        }
        vector<string> rows(numRows);
        int index = 0, direction = 0;
        string res = "";
        for (int i = 0; i < s.size(); i++) {
            rows[index] += s[i];
            if (index == 0) {
                direction = 1;
            } else if (index == numRows - 1) {
                direction = -1;
            }
            index += direction;
        }

        for (string str : rows) {
            res += str;
        }
        return res;
    }
};