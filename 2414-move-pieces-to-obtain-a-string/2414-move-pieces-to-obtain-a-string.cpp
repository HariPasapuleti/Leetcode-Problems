class Solution {
public:
    bool canChange(string start, string target) {

        int i = 0, j = 0;
        while (i < start.size() || j < target.size()) {
            while (i < start.size() && start[i] == '_') {
                i++;
            }
            while (j < target.size() && target[j] == '_') {
                j++;
            }
            
            if (i == start.size() || j == start.size()) {
                return i == start.size() && j == start.size();
            }
            if (start[i] != target[j] || start[i] == 'L' && i < j ||
                start[i] == 'R' && i > j)
                return false;
            i++;
            j++;
        }
        return true;
    }
};