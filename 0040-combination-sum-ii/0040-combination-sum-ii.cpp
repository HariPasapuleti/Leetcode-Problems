#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target) {
        std::vector<std::vector<int>> result;
        std::vector<int> combination;
        std::sort(candidates.begin(), candidates.end()); // Sort the candidates to handle duplicates
        backtrack(candidates, target, 0, combination, result);
        return result;
    }

private:
    void backtrack(const std::vector<int>& candidates, int target, int start,
                   std::vector<int>& combination, std::vector<std::vector<int>>& result) {
        if (target == 0) {
            result.push_back(combination);
            return;
        }

        for (int i = start; i < candidates.size(); ++i) {
            if (i > start && candidates[i] == candidates[i - 1]) {
                // Skip duplicates
                continue;
            }

            if (candidates[i] > target) {
                // No need to continue if the candidate exceeds the target
                break;
            }

            combination.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], i + 1, combination, result);
            combination.pop_back();
        }
    }
};


// class Solution {
// public:
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

//         sort(candidates.begin(), candidates.end());

//         for(int i=0;i<candidates.size();i++)
//         {
//             if(arr[i] >= target) {
//                 j = i;
//                 break;
//             }
//         }

//         int i = 0;
//         vector <int> res;

//         while(i < j)
//         {
//             if(arr[i] + arr[j] == target) {
//                 res[i].push_back(arr[i]);
//                 res[i].push_back(arr[j]);
//                 i++; j--;
//                 continue;
//             }
//             else if(arr[i] + arr[j] < target) {
//                 int k = i;
//                 int temp_sum = arr[j];
//                 res[i].push_back(arr[j]);
//                 while(temp_sum < target)
//                 {
//                     res[i].push_back(arr[i]);
                    
//                     temp_sum += arr[i];
//                     i++;
//                 }
                
//                 if(temp_sum > target) {
//                     res.erase(res.begin(), i);
//                     i=k;
//                     j--;
//                 }
                
//             }
//             j--;
//         }
        
//     }
// };