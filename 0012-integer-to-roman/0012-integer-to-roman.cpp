class Solution {
public:
    string intToRoman(int num) {

        vector<pair<string, int>> roman{
            {"I", 1},   {"IV", 4},   {"V", 5},   {"IX", 9},  {"X", 10},
            {"XL", 40}, {"L", 50},   {"XC", 90}, {"C", 100}, {"CD", 400},
            {"D", 500}, {"CM", 900}, {"M", 1000}};
        int temp = num, ind = 12;
        string res = "";
        while (temp > 0) {
            if (temp >= roman[ind].second) {
                int count = temp / roman[ind].second;
                temp -= roman[ind].second * count;
                while (count--) {
                    res += roman[ind].first;
                }
            }
            // cout << temp << " " << res << endl;
            ind--;
        }
        return res;
    }
};