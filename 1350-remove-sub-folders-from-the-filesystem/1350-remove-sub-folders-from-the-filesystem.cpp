class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {

        unordered_set<string> set(folder.begin(), folder.end());
        vector<string> res;

        for (auto f : folder) {
            res.push_back(f);
            string str = "";
            for (int i = 0; i < f.size(); i++) {
                if (f[i] == '/' && set.find(str) != set.end()) {
                    res.pop_back();
                    break;
                }
                str += f[i];
            }
        }
        return res;
    }
};