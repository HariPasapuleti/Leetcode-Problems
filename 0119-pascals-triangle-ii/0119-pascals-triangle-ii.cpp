class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(1, 1);
        for (int i = 0; i < rowIndex; i++) {
            vector<int> temp;
            temp.push_back(1);
            for (int j = 1; j < row.size(); j++) {
                temp.push_back(row[j] + row[j - 1]);
            }
            temp.push_back(1);
            row = temp;
        }
        return row;
    }
};