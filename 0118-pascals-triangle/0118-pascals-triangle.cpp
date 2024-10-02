class Solution {
public:
    vector<vector<int>> generate(int n) {

        vector<vector<int>> res;
        int element;
        for(int i=0;i<n;i++)
        {
            int temp=i;
            vector<int> row;
            row.push_back(1);
            for(int j=1;j<temp;j++)
            {
                element=res[i-1][j-1]+res[i-1][j];
                row.push_back(element);
            }

            if(i>0) {
                row.push_back(1); 
            }
            res.push_back(row);
        }
        return res;
    }
};