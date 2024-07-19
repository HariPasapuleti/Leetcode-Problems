#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {

        vector<int> result;
        for(int i = 0; i < matrix.size(); i++)
        {
            int min_element = matrix[i][0];
            int min_index = 0;
            for(int j = 0; j < matrix[0].size(); j++)
            {
                if(matrix[i][j] < min_element) {
                    min_element = matrix[i][j];
                    min_index = j;
                }
            }
            bool isLucky = true;
            for(int k = 0; k < matrix.size(); k++)
            {
                if(matrix[k][min_index] > min_element) {
                    isLucky = false;
                }
            }

            if(isLucky) result.push_back(min_element);
        }  

        return result;
        
    }
};