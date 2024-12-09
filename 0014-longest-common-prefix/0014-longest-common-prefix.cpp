class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string temp = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            string temp1 = "";
            for (int j = 0; j < min(temp.size(), strs[i].size()); j++) {
                if (temp[j] == strs[i][j])
                    temp1 += temp[j];
                else
                    break;
            }
            temp = temp1;
        }
        return temp;
    }
};