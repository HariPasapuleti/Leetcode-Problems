class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> IPs, temp;
        findIP(0, s, temp, IPs);
        return IPs;
    }

    void findIP(int ind, string s, vector<string>& temp, vector<string>& IPs) {
        if (ind == s.size() && temp.size() == 4) {
            string validIP =
                temp[0] + '.' + temp[1] + '.' + temp[2] + '.' + temp[3];
            IPs.push_back(validIP);
            return;
        }

        string tempStr = "";
        for (int i = ind; i < s.size() && temp.size() < 4; i++) {
            if (s[i] - '0' > 9)
                continue;
            tempStr += s[i];
            int tempInt = stoi(tempStr);
            if (tempInt >= 0 && tempInt <= 255) {
                temp.push_back(tempStr);
                findIP(i + 1, s, temp, IPs);
                temp.pop_back();
            }
            if (tempInt <= 0 || tempInt > 255)
                break;
        }
    }
};