class Solution {
public:
    bool rotateString(string s, string goal) {

        if (s.size() != goal.size())
            return false;
        s += s;
        return s.find(goal) != string::npos;
        // int i = 0, n = s.size();
        // while (i < n) {
        //     string temp = s.substr(i, n);
        //     cout << s << " ";
        //     if (temp == goal)
        //         return true;
        //     s += s[i];
        //     i++;
        // }
        // return false;
    }
};