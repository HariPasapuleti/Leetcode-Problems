class Solution {
public:
    string reverseStr(string s, int k) {

        string result = "";
        int n = s.size();

        if (k == 1)
            return s;

        for (int i = 0; i < s.size(); i += 2 * k) {
            result += helper_reverse(s, i, min(i + k - 1, n - 1));
            // cout << result << endl;
            if (i + k < s.size()) {
                result += s.substr(i + k, min(k, n - i - k));
            }

            // cout << result << endl;
        }
        return result;
    }

private:
    string helper_reverse(const string& s, int i, int j) {
        string str = "";
        while (i <= j) {
            str += s[j];
            j--;
        }
        cout << str << endl;

        return str;
    }
};