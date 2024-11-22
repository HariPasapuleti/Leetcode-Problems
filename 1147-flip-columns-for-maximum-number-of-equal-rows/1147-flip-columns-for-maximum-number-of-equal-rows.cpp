class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {

        // int m=matrix.size(), n=matrix[0].size(), res=0;
        // flip(0, m, n, matrix,  res);
        // return res;

        unordered_map<string, int> mp;
        for (auto& row : matrix) {
            string stringPattern = "";
            for (int i = 0; i < row.size(); i++) {
                if (row[0] == row[i]) // may take reference of first or last
                    stringPattern += "T";
                else
                    stringPattern += "F";
            }
            mp[stringPattern]++;
        }

        int res = 0;
        for (auto& mpp : mp) {
            res = max(res, mpp.second);
        }
        return res;
    }

    // void flip(int index, int row, int col, vector<vector<int>> &matrix, int
    // &res)
    // {
    //     if(index>=col){
    //         int count=0;
    //         for(int i=0;i<row;i++)
    //         {
    //             int flag=0;
    //             for(int j=1;j<col;j++)
    //             {
    //                 if(matrix[i][j]!=matrix[i][j-1]) {
    //                     flag=1;
    //                     break;
    //                 }
    //             }
    //             if(flag==0) count++;
    //         }
    //         res=max(res, count);
    //         return;
    //     }

    //     for(int i=0;i<row; i++)
    //     {
    //         if(matrix[i][index]==0) matrix[i][index]=1;
    //         else matrix[i][index]=0;
    //     }
    //     flip(index+1, row, col, matrix, res);
    //     for(int i=0;i<row; i++)
    //     {
    //         if(matrix[i][index]==0) matrix[i][index]=1;
    //         else matrix[i][index]=0;
    //     }
    //     flip(index+1, row, col, matrix, res);
    // }
};