class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {

        int k = 0;
        string str = "";
        for (int i = 0; i < s.size(); i++) {
            if (k < spaces.size() && i == spaces[k]) {
                str += ' ';
                k++;
            }
            str += s[i];
        }
        return str;
    }
};