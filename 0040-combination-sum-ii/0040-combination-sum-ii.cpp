class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& canditates, int target) {

        int n = canditates.size();
        vector<vector<int>> res;
        vector<int> part;
        sort(canditates.begin(), canditates.end());
        helper(0, canditates, target, res, part);

        return res;
    }

    void helper(int index, vector<int> canditates, int target,
                vector<vector<int>>& res, vector<int>& part) {

        if (target == 0) {
            res.push_back(part);
            return;
        }
        
        for(int i=index;i<canditates.size();i++)
        {
            if(i>index && canditates[i]==canditates[i-1]) continue;
            if(target<canditates[i]) break;

            part.push_back(canditates[i]);
            helper(i+1,canditates,target-canditates[i],res,part);
            part.pop_back();
        }

    }
};