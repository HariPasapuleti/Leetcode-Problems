class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {

        int n=code.size();
        vector<int> res;
        for(int i=0;i<code.size();i++)
        {
            int temp=abs(k), ind_sum=0;
            while(temp>0)
            {
                if(k>0){
                    ind_sum+=code[(i+temp)%n];
                }
                else if(k==0) ind_sum=0;
                else {
                    ind_sum+=code[(i-temp+n)%n];
                }
                temp--;
            }
            res.push_back(ind_sum);
        }
        return res;
    }
};